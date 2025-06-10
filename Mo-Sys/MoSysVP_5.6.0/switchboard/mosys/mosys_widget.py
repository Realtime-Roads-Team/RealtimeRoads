from PySide6 import QtGui, QtCore, QtWidgets
from switchboard.config import CONFIG
from ..device_widget_base import DeviceWidget
from devices.device_base import DeviceStatus
from .mosys_utils import *
from .mosys_table import MoSysDiscoveryTable
from .mosys_bonjour import *
from .mosys_device import *
from .mosys_device_types import get_device_class
from .mosys_defines import MOSYS_DEVICE_TYPE
import threading


class MoSysWidget(DeviceWidget):
    def __init__(self, name, device_hash, address, icons, collection=None, parent=None) -> None:
        super().__init__(name=name, device_hash=device_hash, address=address, icons=icons, parent=parent)
        self.device_widget_name = name
        self.update_thread = None
        self.connection_thread = None
        self.status_icon.setToolTip("Not Connected")
        self.is_duplicate = False
        self.device_collection = collection
        self.weak_device_reference = None
        if address not in collection:
            sdebug("Failed to register address as a device in device collection")
            return
        device = collection.get_device_with_address(address)
        if device.device_widget is None:
            device.device_widget = self
            self.weak_device_reference = WeakMoSysDevice(device)
        else:
            serror("Duplicate widget found. Please remove this device.")
            self.is_duplicate = True
        self.pixmap = QtGui.QPixmap(get_icon_mapping(device.device_type))
        self.device_icon.setPixmap(self.pixmap)
        self.name_line_edit.setReadOnly(True)
        self.address_line_edit.setReadOnly(True)

    def get_ip_address(self):
        return self.address_line_edit.text()

    def inspect_device_node(self):
        try:
            device = self.weak_device_reference.get()
            if not device.device_connected:
                serror("Please connect the device to inspect it.")
                return
            if device.device_node_in_focus:
                device.dispose_old_device_node()
            else:
                if DEVICE_COLLECTION.device_monitor.info_layout.count():
                    layout_item = DEVICE_COLLECTION.device_monitor.info_layout.takeAt(0)
                    get_object_attr_from_tree(layout_item, ["widget", "device", "dispose_old_device_node"])
                widget = device.get_new_node()
                DEVICE_COLLECTION.device_monitor.info_layout.addWidget(widget)
        except AttributeError as e:
            sdebug(e, True)

    def _update_device(self):
        address = self.weak_device_reference.get().device_address
        try:
            while self.weak_device_reference.get().device_connected:
                time.sleep(REFRESH_TIME)
                self.weak_device_reference.get().update()
                if self.weak_device_reference.get().device_node_in_focus:
                    self.weak_device_reference.get().device_node_widget.\
                        update_node_status(self.weak_device_reference.get().report_status())
            self.weak_device_reference.get().dispose_old_device_node()
        except AttributeError:  # this is guaranteed to happen as weak_device_reference
            # will, at some point, no longer be valid
            sprint(f"Device at {address} will no longer update")
        sprint(f"Disconnected from {address}")

    def _update_thread_start(self):
        if self.weak_device_reference is None or not self.weak_device_reference.is_valid():
            sdebug("Cannot connect as device does not exist.", True)
            if self.update_thread is not None:
                sdebug("Update thread is still active but connection to the device is invalid", True)
        else:
            if self.update_thread is not None:
                self.weak_device_reference.get().disconnect()
                self.update_thread = None
            else:
                if self.weak_device_reference.get().connect():
                    sprint(f"Connected to {self.weak_device_reference.get().device_address}")
                    self.update_thread = threading.Thread(target=self._update_device)
                    self.update_thread.daemon = True
                    self.update_thread.start()
                else:
                    serror(f"Could not connect to or update device at {self.weak_device_reference.get().device_address}")
                    self.connect_button.setChecked(False)
        self.connect_button.setEnabled(True)
        self.connection_thread = None

    def _connection_thread_start(self):
        if self.connection_thread is not None:
            sprint("The connection thread is already active. Please wait.")
            return
        if self.is_duplicate:
            sprint("Cannot connect using duplicate entry.")
            return
        self.connect_button.setEnabled(False)
        self.connection_thread = threading.Thread(target=self._update_thread_start, args=())
        self.connection_thread.daemon = True
        self.connection_thread.start()

    def _add_control_buttons(self):
        super()._add_control_buttons()
        CONTROL_BUTTON_ICON_SIZE = QtCore.QSize(21, 21)
        self.web_button = self.add_control_button(
            icon_off=get_asset("web.png"),
            icon_size=CONTROL_BUTTON_ICON_SIZE,
            tool_tip='Web UI for StarTracker',
            hover_focus=False,
            name='web')
        self.vnc_button = self.add_control_button(
            icon_off=get_asset("vnc.png"),
            icon_size=CONTROL_BUTTON_ICON_SIZE,
            tool_tip='VNC to StarTracker',
            hover_focus=False,
            name='vnc')
        self.connect_button = self.add_control_button(
            icon_size=CONTROL_BUTTON_ICON_SIZE,
            tool_tip='Connect',
            hover_focus=False,
            name='connect')
        self.connect_button.released.connect(self._connection_thread_start)
        self.vnc_button.released.connect(self._open_vnc)
        self.web_button.released.connect(self._open_web)

    def _open_vnc(self):
        device = self.weak_device_reference.get()
        if device:
            open_vnc(device.device_address)

    def _open_web(self):
        device = self.weak_device_reference.get()
        if device:
            open_web(device.device_address)

    def _double_check_config_removed_device(self):
        if not CONFIG.saving_allowed:
            # sometimes the config is read-only (either because the file itself is read-only or if it's modified elsewhere by Switchboard)
            # notify the user the config will not update and the devices will not get removed
            serror("Config is not editable, changes not saved.")
            return
        # force delete the device, Switchboard has a bug that causes deleted devices (when there are others present) to not get deleted from the CONFIG
        CONFIG.on_device_removed(self.device_hash, MOSYS_DEVICE_TYPE, self.device_widget_name, True)

    def update_status(self, status, previous_status):
        device = DEVICE_COLLECTION.get_device_with_widget(self)
        if status == DeviceStatus.DELETE:
            if self.is_duplicate:
                sprint("Deleting duplicate entry.")
            elif device is not None:
                sprint(f'Deleting {device.device_name} ({self.get_ip_address()}) from the config, '
                       f'you will need to re-discover this StarTracker in order to use it again.')
                if device.device_connected:
                    device.disconnect()
                if device.device_node_widget is not None:
                    DEVICE_COLLECTION.device_monitor.info_layout.removeWidget(device.device_node_widget)
                device.dispose_old_device_node()
                DEVICE_COLLECTION.remove_device(device)
                DEVICE_COLLECTION.device_monitor.remove_item_from_table(device)
                self._double_check_config_removed_device()
        DeviceWidget.update_status(self, status, previous_status)


class MoSysManualAddDialog(QtWidgets.QDialog):
    def __init__(self, accepted_func, parent=None):
        super().__init__(parent=parent, f=QtCore.Qt.WindowCloseButtonHint)
        self.accepted = accepted_func
        self.setWindowTitle("Add Device Manually")
        self.desc_label = QtWidgets.QLabel("Enter the device's type and IP address then wait for validation.")
        self.device_type = QtWidgets.QComboBox()
        self.device_name = QtWidgets.QLineEdit()
        for dtype in MoSysSupportedDeviceTypes:
            self.device_type.addItem(dtype.value)
        self.ip_field = QtWidgets.QLineEdit(self)
        self.ip_field.setValidator(ip_validator)
        self.form_layout = QtWidgets.QFormLayout()
        self.form_layout.addWidget(self.desc_label)
        self.form_layout.addRow("Device Type", self.device_type)
        self.form_layout.addRow("Device Name", self.device_name)
        self.form_layout.addRow("IP Address", self.ip_field)
        layout = QtWidgets.QVBoxLayout()
        layout.insertLayout(0, self.form_layout)
        button_box = QtWidgets.QDialogButtonBox()
        button_box.addButton(QtWidgets.QPushButton("Add"), QtWidgets.QDialogButtonBox.ButtonRole.AcceptRole)
        button_box.addButton(QtWidgets.QPushButton("Cancel"), QtWidgets.QDialogButtonBox.ButtonRole.RejectRole)
        button_box.accepted.connect(self.accept)
        button_box.rejected.connect(self.reject)
        layout.addWidget(button_box)
        self.setLayout(layout)

    def accept(self) -> None:
        if self.device_type.currentText() == "" or self.device_name.text() == "" or self.ip_field.text() == "":
            serror("Please fill in all empty fields")
            return
        self.accepted(self.device_type.currentText(), self.device_name.text(), self.ip_field.text())
        super().accept()


class MoSysAddDeviceDialog(QtWidgets.QDialog):  # Discovery dialog box
    def __init__(self, device_type, existing_devices, parent=None):
        super().__init__(parent=parent, f=QtCore.Qt.WindowCloseButtonHint)
        self.discovery_thread = None

        self.setMinimumSize(600, 300)

        self.device_type = device_type
        self.setWindowTitle(f"Search for {self.device_type} Devices")

        self.discover_btn = QtWidgets.QPushButton()
        self.discover_btn.setText("Refresh")
        self.discover_btn.released.connect(self.discover_devices)

        self.manual_btn = QtWidgets.QPushButton()
        self.manual_btn.setText("+")
        self.manual_btn.released.connect(self.add_device_manually)

        self.old_method_button = QtWidgets.QCheckBox()
        self.old_method_button.setText("Use Legacy DNS Method")
        self.old_method_button.setToolTip("This only applies to discovering older StarTrackers.\n"
                                          "Tick this and then click Refresh.")
        self.old_method_button.setChecked(True)

        self.discover_button_box = QtWidgets.QDialogButtonBox()
        self.discover_button_box.addButton(QtWidgets.QPushButton("Add"), QtWidgets.QDialogButtonBox.ButtonRole.AcceptRole)
        self.discover_button_box.addButton(QtWidgets.QPushButton("Cancel"), QtWidgets.QDialogButtonBox.ButtonRole.RejectRole)
        self.discover_button_box.accepted.connect(self.accept_devices)
        self.discover_button_box.rejected.connect(self.reject_devices)

        self.btn_layout = QtWidgets.QHBoxLayout()
        self.btn_layout.addWidget(self.discover_btn, 0)
        self.btn_layout.addWidget(self.manual_btn, 0)
        self.btn_layout.addWidget(self.old_method_button, 0)
        self.btn_layout.addWidget(self.discover_button_box, 1)

        self.loading_layout = QtWidgets.QVBoxLayout()
        loading_label = QtWidgets.QLabel()
        movie = QtGui.QMovie(get_asset("loading.gif"))
        movie.setScaledSize(QtCore.QSize(25, 25))
        loading_label.setMovie(movie)
        movie.start()
        loading_label.hide()
        loading_label_text = QtWidgets.QLabel("Loading...")
        loading_label_text.hide()
        self.loading_layout.addWidget(loading_label)
        self.loading_layout.addWidget(loading_label_text)

        self.list_layout = QtWidgets.QVBoxLayout()
        self.device_list = MoSysDiscoveryTable()
        self.list_layout.addWidget(self.device_list)

        layout = QtWidgets.QVBoxLayout()
        layout.insertLayout(0, self.btn_layout)
        layout.insertLayout(1, self.list_layout)
        layout.insertLayout(2, self.loading_layout)
        self.setLayout(layout)

        # Auto find devices on startup
        self.discover_devices()

    def populate_table(self):
        if self.discovery_thread is not None:
            serror("Population thread is still running. Please wait for the table to be filled and then refresh.")
            return
        self.discovery_thread = threading.Thread(target=self._populate_table, args=(LocalDNSType.SERVICE if not
                                                                                    self.old_method_button.isChecked()
                                                                                    else LocalDNSType.BOTH, ))
        if self.discovery_thread is not None:
            self.device_list.clear_table()
            self.discovery_thread.daemon = True  # make sure this thread is killed if Switchboard is closed
            self.discovery_thread.start()

    def _clear_discovered(self):
        for discovered in DEVICE_COLLECTION.get_devices_in_location(ConfigLocation.DISCOVERED):
            DEVICE_COLLECTION.remove_device(discovered)

    def _populate_table(self, service):
        self._clear_discovered()
        # Re-discover
        if service == LocalDNSType.SERVICE or service == LocalDNSType.BOTH:
            for service_type in BonjourServiceType:
                supported_type = BonjourServiceType.map_to_supported_device_type(service_type)
                for entry in MoSysServiceBrowser.discover(service_type):
                    if "mo-sys_api-" in entry.service_name:
                        serror("Detected an old implementation of Bonjour, please update the MoSysVP software on all machines on the network")
                        continue
                    ip = entry.get_ipv4_address()
                    self._add_item_and_device(supported_type.value, entry.service_name, ip[0])
        if service == LocalDNSType.NAME or service == LocalDNSType.BOTH:
            for service_type in BonjourServiceType:
                supported_type = BonjourServiceType.map_to_supported_device_type(service_type)
                for index, ip in enumerate(AlternativeDiscoveryMethod.discover(service_type)):
                    self._add_item_and_device(supported_type.value, f"{strip_lower_chars(supported_type.value)} {index}", ip)
        self._is_loading_discover_now(False)
        self.discovery_thread = None

    # Removing this breaks the Mo-Sys discovery box
    # because Switchboard is explicitly looking for it when initialising the AddDeviceDialog class
    def add_name_validator(self, validator):
        pass

    def _add_item_and_device(self, supported_type, service_name, ip):
        device = get_device_class(supported_type)(service_name, ip, supported_type, ConfigLocation.DISCOVERED)
        if DEVICE_COLLECTION.add_device(device):
            self.device_list.add_item(supported_type, service_name, ip, None)
        else:
            device.device_location = ConfigLocation.TEMPORARY

    def accept_devices(self) -> None:
        for device in DEVICE_COLLECTION:
            for device_2 in DEVICE_COLLECTION:
                if device != device_2 and device.device_name == device_2.device_name:
                    serror(f"Device name conflict detected for {device.device_name}")
                    return
        super().accept()  # calls devices_to_add

    def reject_devices(self) -> None:
        self._clear_discovered()
        sprint("Clearing discovered devices")
        super().reject()  # cancel dialog box

    def devices_to_add(self):
        widgets_to_add = []
        for device in DEVICE_COLLECTION.get_devices_in_location(ConfigLocation.DISCOVERED):
            if device.device_include == "Yes":
                widgets_to_add.append({"type": self.device_type, "name": device.device_name, "address": device.device_address, "kwargs":{}})
                DEVICE_COLLECTION.device_monitor.add_item_to_table(device)
                device.device_location = ConfigLocation.IN_CONFIG_FILE
            else:
                sprint(f"Not including {device.device_address}")
        return widgets_to_add

    def devices_to_remove(self):
        return []

    def discover_devices(self):
        self._is_loading_discover_now(True)
        self.populate_table()

    def _is_loading_discover_now(self, boolean):
        for i in range(self.loading_layout.count()):
            self.loading_layout.itemAt(i).widget().show() if boolean else self.loading_layout.itemAt(i).widget().hide()
        # Invert for buttons
        for i in range(self.btn_layout.count()):
            self.btn_layout.itemAt(i).widget().hide() if boolean else self.btn_layout.itemAt(i).widget().show()

    def add_device_manually(self):
        manual = MoSysManualAddDialog(lambda dtype, dname, dip: self._add_item_and_device(dtype, dname, dip))
        manual.exec_()
        del manual


class MoSysMonitorTab(QtWidgets.QTabWidget):

    def __init__(self, table, parent):
        super().__init__(parent=parent)
        self.setTabPosition(QtWidgets.QTabWidget.TabPosition.North)
        self.setMovable(False)
        self.top_layout = QtWidgets.QVBoxLayout()
        table_layout = QtWidgets.QVBoxLayout()
        self.address_table = []  # list of addresses, can use this to query DEVICE_COLLECTION
        # do not add devices themselves
        self.table = table
        if table is not None:
            table_layout.addWidget(self.table)
            self.info_layout = QtWidgets.QVBoxLayout()  # add a widget to this to display information
            self.top_layout.insertLayout(0, table_layout)
            self.top_layout.insertLayout(1, self.info_layout)
        self.setLayout(self.top_layout)

    def add_item_to_table(self, device):
        if device is not None and device.device_address not in self.address_table:
            self.address_table.append(device.device_address)
            self.table.add_item(device.device_type, device.device_name, device.device_address)

    def remove_item_from_table(self, device):
        if device is not None and device.device_address in self.address_table:
            self.address_table.remove(device.device_address)
            self.table.remove_item(device.device_address)
