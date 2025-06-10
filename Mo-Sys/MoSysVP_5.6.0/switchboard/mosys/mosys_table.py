from .mosys_utils import QtGui, QtWidgets, QtCore, sprint, sdebug, UserEditState, \
    report_not_implemented, get_asset, iterate_enum, sdebug_full_stack
from .mosys_device import DEVICE_COLLECTION
import threading
import time
from .FFS_utils import FFS_utils
from switchboard.config import CONFIG
import xml.etree.ElementTree as ET
import os
"""
DiscoveryTable
Device Type     Device Name         Address     Include
StarTracker     CambridgeOffice     0.0.0.0     True


PanelTable?
Device Type     Device Name         Address     Tracking Status
StarTracker     CambridgeOffice     0.0.0.0     Optical Good (Green Light)


ItemIsAutoTristate = PySide2.QtCore.Qt.ItemFlag.ItemIsAutoTristate
ItemIsDragEnabled = PySide2.QtCore.Qt.ItemFlag.ItemIsDragEnabled
ItemIsDropEnabled = PySide2.QtCore.Qt.ItemFlag.ItemIsDropEnabled
ItemIsEditable = PySide2.QtCore.Qt.ItemFlag.ItemIsEditable
ItemIsEnabled = PySide2.QtCore.Qt.ItemFlag.ItemIsEnabled
ItemIsSelectable = PySide2.QtCore.Qt.ItemFlag.ItemIsSelectable
ItemIsTristate = PySide2.QtCore.Qt.ItemFlag.ItemIsTristate
ItemIsUserCheckable = PySide2.QtCore.Qt.ItemFlag.ItemIsUserCheckable
ItemIsUserTristate = PySide2.QtCore.Qt.ItemFlag.ItemIsUserTristate
ItemNeverHasChildren = PySide2.QtCore.Qt.ItemFlag.ItemNeverHasChildren

"""
class MoSysTableItem(QtWidgets.QTableWidgetItem):
    """
    Base class for a cell in the table widget
    """
    def __init__(self, column, text="", icon=None):
        self.column = column
        if icon is None:
            super().__init__(text)
        else:
            super().__init__(icon, text)
        if self.column.edit_state == UserEditState.PureEditable:
            self.setFlags(QtCore.Qt.ItemFlag.ItemIsEnabled |
                          QtCore.Qt.ItemFlag.ItemIsSelectable |
                          QtCore.Qt.ItemFlag.ItemIsEditable)
        elif self.column.edit_state == UserEditState.EnumEditable or \
                self.column.edit_state == UserEditState.Inspectable:
            self.setFlags(QtCore.Qt.ItemFlag.ItemIsEnabled |
                          QtCore.Qt.ItemFlag.ItemIsSelectable)
        else:
            self.setFlags(QtCore.Qt.ItemFlag.ItemIsEnabled)

    def update(self, data):
        report_not_implemented()


class MoSysTableTextItem(MoSysTableItem):
    def __init__(self, text, column):
        super().__init__(column, text)

    def update(self, data):
        self.setText(data)


class MoSysTableIconItem(MoSysTableItem):
    def __init__(self, flag, column):
        # set 'Yes' by default
        iconPath = column.tuple_values[0][1]
        if flag == None:
            flag = 'Yes'
        elif flag == 'No':
            iconPath = column.tuple_values[1][1]
        icon = QtGui.QIcon(iconPath)
        super().__init__(column, flag, icon)

    def update(self, data):
        self.setText(data[0])
        self.setIcon(QtGui.QIcon(data[1]))


class MoSysTableColumn:
    """
    Base class for a column in the table widget
    """
    def __init__(self, name: str, nice_name: str, edit_state: UserEditState, text_column: bool, default_value: tuple,
                 tuple_values: list, default_column_size: int):
        """
            name = Column's attribute name
            nice_name = Column's Nice Name (the name which you see in the column header)
            edit_state = How you want the user to be able to interact with the column, whether it should be editable
            text_column = Whether the column is purely for text or if it also uses icons
            default_value = The default value of the item/cell when first made
            The default value is set as the first item in the tuple_values list so no need to include it in tuple_values
            tuple_values = The values iterated through when EnumEditable is set - This is a list of tuple pairs (Text, Data)
            default_column_size = The column widget when first created
        """
        self.attribute_name = name
        self.nice_name = nice_name
        self.text_column = text_column
        self.edit_state = edit_state
        if default_value is not None:
            self.tuple_values = [default_value]
            if tuple_values is not None:
                self.tuple_values += tuple_values
        elif tuple_values is not None:
            self.tuple_values = tuple_values
        else:
            sdebug("Restricted or enumerated values must contain at least 1 value or the default value must not be None", True)
        self.column_width = default_column_size

    def create_new_cell(self, data):
        """
        Create a cell in this column that can display Mo-Sys related data
        Only equal to 1 cell of 1 row and 1 column
        """
        return None

    def get_default_value(self):
        return self.tuple_values[0]

    def get_iterable(self):
        return self.tuple_values


class MoSysTextColumn(MoSysTableColumn):
    def __init__(self, name, nice_name, edit_state, default_value="", tuple_values=None, default_column_size=125):
        super().__init__(name, nice_name, edit_state, True, default_value, tuple_values, default_column_size)

    def create_new_cell(self, data):
        return MoSysTableTextItem(data, self)


class MoSysIconColumn(MoSysTableColumn):
    def __init__(self, name, nice_name, edit_state, default_value=None, tuple_values=None, default_column_size=125):
        super().__init__(name, nice_name, edit_state, False, default_value, tuple_values, default_column_size)

    def create_new_cell(self, data):
        return MoSysTableIconItem(data, self)


class MoSysCheckboxColumn(MoSysIconColumn):
    def __init__(self, name, nice_name, on_text, off_text):
        if on_text == off_text:
            sdebug("on_text and off_text cannot match", True)
        super().__init__(name, nice_name, UserEditState.EnumEditable,
                         (on_text, ":icons/images/check_box_checked_hovered.png"),
                         [(off_text, ":icons/images/check_box_hovered.png")])


class MoSysVarietyColumn(MoSysIconColumn):
    def __init__(self, name, nice_name, edit_state, default_value=("", "")):
        super().__init__(name, nice_name, edit_state,
                         default_value,
                         [{}])

    def add_tuple_values(self, identifier, values):
        self.tuple_values[1][identifier] = values

    def get_value(self, row, status_index):
        return self.tuple_values[1][row][status_index]


class MoSysStatusColumn(MoSysVarietyColumn):
    def __init__(self, name, nice_name):
        super().__init__(name, nice_name, UserEditState.Inspectable,
                         ("Disconnected", ":icons/images/status_blank_disabled.png"))


class MoSysTable(QtWidgets.QTableWidget):
    """
    Base class for implementing a table widget
    """
    def __init__(self, columns=None):
        super().__init__()
        if columns is not None:
            self.columns = columns
            self.setColumnCount(len(columns))
            self.setHorizontalHeaderLabels([x.nice_name for x in columns])
        self.rows = []
        self.update_thread = None
        self.cellChanged.connect(self._validate_cell_changes)
        self.itemClicked.connect(self._validate_cell_click)
        self.reset_columns_width()

    def start_update(self):
        """
        Method to start update thread

        This should only be called when update_thread is not active and NoneType
        """
        if self.update_thread is not None:
            sprint("Update thread is still running. Please wait for it to finish.")
            return
        self.update_thread = threading.Thread(target=self._update_thread_start, args=())
        self.update_thread.daemon = True
        self.update_thread.start()

    def _update_thread_start(self):
        """
        The function that is called when the update thread starts.

        Override this function to change the update thread's behaviour / function.
        """
        report_not_implemented()

    def get_column(self, column_name):
        """
        Get a column using its attribute_name
        """
        for col in self.columns:
            if col.attribute_name == column_name:
                return col
        return None

    def reset_columns_width(self):
        """
        Reset columns to their default width
        """
        for i in range(self.get_column_count()):
            self.setColumnWidth(i, self.columns[i].column_width)

    def get_row_count(self):
        """
        Shortcut for getting len of rows
        """
        return len(self.rows)

    def get_column_count(self):
        """
        Shortcut for getting len of columns
        """
        return len(self.columns)

    def clear_table(self):
        """
        Clear the entire table, including rows and contents - does not clear columns
        """
        self.rows.clear()
        self.clearContents()
        self.setRowCount(0)

    def get_item(self, row, column):
        """
        Get the item in the table at Row, Column

        0, 0 is top-left
        """
        return self.item(row, column)

    def get_row(self, row):
        """
        Returns the row data at the specified Row

        This is not the QtWidgets.QTableWidget row but a dict displaying all the rows data

        This should not be used to modify the rows contents as changes are not reflected in the table
        """
        return self.rows[row]

    def add_item(self, **kwargs):
        """
        Add a new row to the table

        The keywords in the kwargs must match the name of the column you are targeting exactly
        """
        item = {}
        count = self.get_row_count()
        self.insertRow(count)
        for i in range(len(self.columns)):
            col = self.columns[i].attribute_name
            kwa = kwargs[col]
            item[col] = kwa
            self.setItem(count, i, self.columns[i].create_new_cell(kwa))
        self.rows.append(item)

    def remove_item(self, address):
        """
        Remove an item from the table using its address

        All rows in the table must contain an address field
        """
        for index, row in enumerate(self.rows):
            if row["Address"] == address:
                self.removeRow(index)
                self.rows.pop(index)

    def inspect_cell(self, item, row, column):
        """
        Should not modify the contents of the cell in any way

        This is triggered when a cell, that is Inspectable, is clicked
        """
        report_not_implemented()

    def update_enum_cell(self, item, row, column):
        """
        Should only modify the contents of the cell in a way that relates to the cell's enum values

        For the most part this function is final and does not need to be derived or changed

        This is triggered when a cell, that is EnumEditable, is clicked
        """
        iterate_enum(column.get_iterable(), lambda txt: item.text() == txt, lambda txt: item.update(txt))
        self._update_device_after_cell_validation(row, column, item)

    def update_cell(self, item, row, column):
        """
        Can modify the contents of the cell in any way

        This is triggered when a cell, that is PureEditable, is changed
        """
        self._update_device_after_cell_validation(row, column, item)

    def _get_address_from_row(self, row):
        return self.get_row(row)["Address"]

    def _get_column_and_row_for_item(self, item):
        return self.columns[self.column(item)], self.row(item)

    def _update_device_after_cell_validation(self, row, column, item):
        address = self._get_address_from_row(row)
        if address in DEVICE_COLLECTION:
            device = DEVICE_COLLECTION.get_device_with_address(address)
            device.set_device_info(column.attribute_name, item.text())
        else:
            sdebug("Device was not added to the device collection during discovery", True)

    def _validate_cell_click(self):
        """
        This is triggered when a cell is clicked
        """
        for item in self.selectedItems():
            pair = self._get_column_and_row_for_item(item)
            column = pair[0]
            row = pair[1]
            if column.edit_state == UserEditState.EnumEditable and \
                    column.tuple_values is not None:
                self.update_enum_cell(item, row, column)
            elif column.edit_state == UserEditState.Inspectable:
                self.inspect_cell(item, row, column)

    def _validate_cell_changes(self, x, y):
        """
        This is triggered when a cell's value is changed
        """
        for item in self.selectedItems():

            pair = self._get_column_and_row_for_item(item)
            column = pair[0]
            row = pair[1]
            if column.edit_state == UserEditState.PureEditable:
                self.update_cell(item, row, column)


class MoSysDiscoveryTable(MoSysTable):
    """
    A MoSysTable implementation for displaying information and devices returned by the Bonjour discovery service
    """
    def __init__(self):
        super().__init__([MoSysTextColumn("Type", "Device Type", UserEditState.NotEditable),
                          MoSysTextColumn("Name", "Device Name", UserEditState.PureEditable),
                          MoSysTextColumn("Address", "Address", UserEditState.NotEditable),
                          MoSysCheckboxColumn("Include", "Include", "Yes", "No")])

    def add_item(self, device_type, device_name, address, include):
        super().add_item(Type=device_type, Name=device_name, Address=address, Include=include)


class MoSysMonitorTable(MoSysTable):
    """
    A MoSysTable implementation for displaying information and devices in the Devices panel
    """
    def __init__(self):
        super().__init__([MoSysTextColumn("Type", "Device Type", UserEditState.Inspectable),
                          MoSysTextColumn("Name", "Device Name", UserEditState.Inspectable),
                          MoSysTextColumn("Address", "Address", UserEditState.Inspectable),
                          MoSysStatusColumn("Status", "Status")])
        self.start_update()

    def add_item(self, device_type, device_name, address):
        super().add_item(Type=device_type, Name=device_name, Address=address, Status=None)

    def _update_thread_start(self):
        while True:
            time.sleep(2)
            try:
                for row in range(self.get_row_count()):
                    address = self._get_address_from_row(row)
                    if address in DEVICE_COLLECTION:
                        device = DEVICE_COLLECTION.get_device_with_address(address)
                        col = self.get_column("Status")
                        item = self.get_item(row, self.columns.index(col))
                        if device.device_connected:
                            item.update(col.get_value(self.get_row(row)["Type"], device.report_status()))
                        else:
                            item.update(col.get_default_value())
            except Exception as e:
                sdebug(e)

    def inspect_cell(self, item, row, column):
        address = self._get_address_from_row(row)
        if address in DEVICE_COLLECTION:
            device = DEVICE_COLLECTION.get_device_with_address(address)
            device.device_widget.inspect_device_node()


class MoSysMonitorFFSSyncTable(MoSysTable):
    """
    A MoSysTable for file sync
    """
    def __init__(self):
        super().__init__([MoSysTextColumn("Type", "Device Type", UserEditState.NotEditable),
                          MoSysTextColumn("Name", "Device Name", UserEditState.NotEditable),
                          MoSysTextColumn("Address", "Address", UserEditState.NotEditable),
                          MoSysTextColumn("Roles", "Roles", UserEditState.NotEditable),
                          MoSysCheckboxColumn("Sync", "Sync", "Yes", "No")])
        self.from_mapped_drive_proj_dir = ''
        self.sync_addresses = []
        self.sync_names = []

    def add_item(self, device_type, device_name, address, roles, sync):
        super().add_item(Type=device_type, Name=device_name, Address=address, Roles=roles, Sync=sync)

    def clear_table(self):
        super().clear_table()

    def _update_device_after_cell_validation(self, row, column, item):
        """
        Function overriden so that it does not call the super class' function
        """
        pass

    def set_ffs_directories(self):
        project_path = CONFIG.UPROJECT_PATH.get_value().rsplit('\\', 1)[0]
        if FFS_utils.setDirectories(project_path, self.sync_addresses, self.from_mapped_drive_proj_dir) == False:
            sprint("Cannot set directories")

    def update_enum_cell(self, item, row, column):
        super().update_enum_cell(item, row, column)

        if item.text() == 'No':
            if self.rows[row]["Address"] in self.sync_addresses:
                self.sync_addresses.remove(self.rows[row]["Address"])
                self.sync_names.remove(self.rows[row]["Name"])
                self.rows[row]["Sync"] = "No"
        else:
            if self.rows[row]["Address"] not in self.sync_addresses:
                self.sync_addresses.append(self.rows[row]["Address"])
                self.sync_names.append(self.rows[row]["Name"])
                self.rows[row]["Sync"] = "Yes"
                
        self.set_ffs_directories()
        self.save_sync_devices_XML()

        if self.ref_to_sync_tooltip:
            self.ref_to_sync_tooltip(self.sync_names)
    
    @classmethod
    def save_sync_tooltip_reference(cls, sync_tooltip_fun):
        cls.ref_to_sync_tooltip = sync_tooltip_fun
    
    def save_sync_devices_XML(self):
        sync_devices = []
        for idx, r in enumerate(self.rows):
            device = [str(idx),r["Name"], r["Sync"]]
            sync_devices.append(device)

        projectDir = CONFIG.UPROJECT_PATH.get_value().rsplit('\\', 1)[0]
        file_dest_path = os.path.join(projectDir, 'Saved\SaveGames\FFS\Sync_flags.xml')

        path = os.path.dirname(file_dest_path)
        if not path:
            os.makedirs(path)
        if os.path.isfile(file_dest_path):
            if not os.access(file_dest_path, os.W_OK):
                sprint(f"XML file is not writable: {file_dest_path}")
                return
        root = ET.Element("root")

        for device in sync_devices:
            dev = ET.SubElement(root, 'device')
            dev.set("row", device[0])
            dev.set("name", device[1])
            dev.set("flag", device[2])

        # Create the XML tree
        tree = ET.ElementTree(root)

        # Write the XML tree to a file
        tree.write(file_dest_path, encoding="utf-8", xml_declaration=True)

    def read_sync_devices_XML(self):
        projectDir = CONFIG.UPROJECT_PATH.get_value().rsplit('\\', 1)[0]
        file_dest_path = os.path.join(projectDir, 'Saved\SaveGames\FFS\Sync_flags.xml')
        if not os.path.exists(file_dest_path):
            return None
        else:
            if not os.access(file_dest_path, os.R_OK):
                sprint(f"XML file is not readable: {file_dest_path}")
                return None

        with open(file_dest_path, 'r') as f:
            mytree = ET.parse(file_dest_path)
            root = mytree.getroot()
            sync_devices_dict = {}
            for device in root.iter("device"):
                sync_devices_dict[device.attrib["name"]] = device.attrib["flag"]

        return sync_devices_dict
    
    def modify_sync_flags_from_xml(self):
        sync_devices_dict = self.read_sync_devices_XML()
        if sync_devices_dict is not None:
            for idx, r in enumerate(self.rows):
                item = self.item(idx, 4)
                if sync_devices_dict[self.rows[idx]["Name"]] == 'Yes':
                    data = ['Yes',":icons/images/check_box_checked_hovered.png"]
                else:
                    data = ['No',":icons/images/check_box_hovered.png"]
                item.update(data)