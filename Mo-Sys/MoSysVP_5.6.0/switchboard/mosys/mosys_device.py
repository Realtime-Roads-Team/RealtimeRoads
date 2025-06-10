from .mosys_utils import *
from PySide6 import QtWidgets, QtGui, QtCore
import re
import requests


class MoSysDeviceNodeWidget(QtWidgets.QWidget):
    def __init__(self, device, parent=None):
        super().__init__(parent=parent)
        self.device = device

    def __del__(self):
        self.device = None

    def update_node_status(self, status):
        report_not_implemented()


class MoSysDevice(object):
    def __init__(self, name, ip, dtype, location):
        self.device_name = name
        self.device_address = ip
        self.device_type = dtype
        self.device_location = location
        self.device_widget = None
        self.device_connected = False
        self.device_include = "Yes"
        self.device_node_in_focus = False
        self.device_node_widget_type = None
        self.device_node_widget = None

    def update_widget_icon(self, pixmap_icon, tooltip):
        if self.device_widget is not None:
            self.device_widget.status_icon.setToolTip(tooltip)
            self.device_widget.status_icon.setPixmap(pixmap_icon)

    def dispose_old_device_node(self):
        if self.device_node_in_focus:
            self.device_node_in_focus = False
        if self.device_node_widget is not None:
            self.device_node_widget.deleteLater()
        self.device_node_widget = None

    def get_new_node(self):
        self.dispose_old_device_node()
        if self.device_node_widget is None and self.device_node_widget_type is not None:
            self.device_node_in_focus = True
            self.device_node_widget = self.device_node_widget_type(self)
            return self.device_node_widget
        sdebug("Something went wrong when disposing of the old widget")
        return None

    def _can_connect(self):
        return not self.device_connected

    def connect(self):
        if self._can_connect():
            self.device_connected = True
            self.update()  # single update -- do not enter into a loop here
            return True
        return False  # we cannot connect or we are already connected,
        # either way, an attempted (or second) connection should not be possible

    def disconnect(self):
        self.device_connected = False

    def _update(self):
        report_not_implemented()

    def update(self):
        if self.device_connected:
            try:
                self._update()
            except requests.exceptions.ConnectionError:
                self.disconnect()

    @staticmethod
    def _modify_attr_name(key):
        key = str(key).lower()
        key = "device_" + key
        return key

    def get_device_info(self, key):
        try:
            return getattr(self, MoSysDevice._modify_attr_name(key))
        except AttributeError:
            sdebug(f"Key ({key}) was not found.")
        return None

    def set_device_info(self, key, value):
        try:
            setattr(self, MoSysDevice._modify_attr_name(key), value)
        except AttributeError:
            sdebug(f"Key ({key}) was not found.")

    def report_status(self):
        return 0


class MoSysDeviceCollection(object):
    instance = None

    def __init__(self):
        self._devices = []
        self.device_monitor = None
        self.ffs_monitor = None

    def __contains__(self, device):
        if type(device) == str:
            search = re.search("^[0-9]", device)
            if search is None:
                sdebug("Regex failed. The query must exclusively contain an IP address or a device with an ip address.",
                       True)
                return False
            ip = device
        else:
            try:
                ip = getattr(device, "device_address")
            except AttributeError:
                ip = ""
        for device in self._devices:
            if device.device_address == ip:
                return True
        return False

    def __len__(self):
        return len(self._devices)

    def __iter__(self):
        return iter(self._devices)

    def __new__(cls, *args, **kwargs):
        """
        Singleton Instance
        """
        if getattr(cls, 'instance') is None:
            cls.instance = super(MoSysDeviceCollection, cls).__new__(cls)
        return cls.instance

    def add_device(self, device: MoSysDevice):
        if device not in self:
            self._devices.append(device)
            return True
        sprint(f"We already added {device.device_address}")
        return False

    def remove_device(self, device: MoSysDevice):
        if device in self:
            self._devices.remove(device)

    def get_device_with_address(self, address):
        devices = [x for x in self._devices if x.device_address == address]
        count = len(devices)
        if count:
            if count > 1:
                serror("Multiple devices with the same address exist. Returning first.")
            return devices[0]
        return None

    def get_device_with_widget(self, widget):
        devices = [x for x in self._devices if x.device_widget == widget]
        count = len(devices)
        if count:
            if count > 1:
                serror("Duplicate widget-device pair found. Returning first.")
            return devices[0]
        return None

    def get_devices_of_type(self, dtype):
        return [x for x in self._devices if x.device_type == dtype]

    def get_devices_in_location(self, location):
        return [x for x in self._devices if x.device_location == location]


DEVICE_COLLECTION = MoSysDeviceCollection()


class WeakMoSysDevice:
    """
    Contains a reference to a MoSysDevice. This reference is only valid whilst it is in DEVICE_COLLECTION.

    Because Python uses reference counting to determine if an object is garbage collectable, holding a reference to
    an object here keeps it from being collected, so it MUST be released if it is removed from DEVICE_COLLECTION.
    This is done automatically.

    This isn't a true weak-reference container. More of an intermediate container.
    """
    def __init__(self, device: MoSysDevice):
        self.weakly_linked_device = device

    def get(self):
        if self.weakly_linked_device is not None:
            if self.weakly_linked_device not in DEVICE_COLLECTION:  # might change this to a validation flag in each
                # device to reduce number of DEVICE_COLLECTION polls
                self.release()
            return self.weakly_linked_device
        return None

    def release(self):
        if self.weakly_linked_device is not None:
            self.weakly_linked_device = None

    def is_valid(self):
        return self.weakly_linked_device is not None and self.weakly_linked_device in DEVICE_COLLECTION


# MoSysDevice is overriden
# MoSysDeviceCollection is not

class MoSysDeviceIcons(object):
    def __init__(self, files=None):
        self.file_points = {}
        if files is not None:
            for file in files:
                self.add_file(file)

    def add_file(self, file) -> None:
        points = []
        core_image = QtGui.QImage(get_asset(file))
        size = core_image.size()
        for y in range(size.height()):
            for x in range(size.width()):
                if core_image.pixel(x, y) == WHITE_I:
                    points.append(QtCore.QPoint(x, y))
        self.file_points[file] = points

    def get_new_pixmap(self, rgb, file="status.png"):
        if file not in self.file_points:
            sprint(f"No point data stored for {file}")
            return None
        _core_image = QtGui.QImage(get_asset(file))
        integer = get_int_from_argb((255, rgb[0], rgb[1], rgb[2]))
        for point in self.file_points[file]:
            _core_image.setPixel(point, integer)
        return QtGui.QPixmap(_core_image)

    def get_status_pixmap(self, status, file):
        report_not_implemented()
        return None

    def get_status_colour(self, status):
        report_not_implemented()
        return None


class MoSysDefaultIcons(MoSysDeviceIcons):
    def __init__(self):
        super().__init__(files=["status.png"])

    def get_status_colour(self, status):
        if status <= 0:  # Disabled
            return 0, 0, 0
        elif status == 1:  # Disconnected
            return 255, 0, 0
        elif status == 2:  # Connected
            return 0, 255, 0
        return None

    def get_status_pixmap(self, status, file="status.png"):
        if status <= 0:  # Disabled
            return QtGui.QPixmap(":/icons/images/status_blank_disabled.png")
        colour_tuple = self.get_status_colour(status)
        if colour_tuple:
            return self.get_new_pixmap(colour_tuple, file)
        return None

