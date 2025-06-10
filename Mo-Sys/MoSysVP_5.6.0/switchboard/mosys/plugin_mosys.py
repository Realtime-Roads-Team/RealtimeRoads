from .mosys_startup import *
from .mosys_monitor import MoSysDeviceMonitorTab
from .mosys_monitor_ffs_sync import MoSysTabViewFFSNodes
from .mosys_widget import MoSysWidget, MoSysAddDeviceDialog
from .mosys_device import MoSysDevice, DEVICE_COLLECTION, ConfigLocation
from .mosys_device_types import get_device_class
from .mosys_defines import MOSYS_DEVICE_TYPE
from ..device_base import Device, PluginHeaderWidgets
from PySide6 import QtWidgets, QtGui, QtCore
from switchboard.config import StringSetting


class AddMoSysDialog(MoSysAddDeviceDialog):  # discovery table
    def __init__(self, existing_devices, parent=None) -> None:
        super().__init__(device_type=MOSYS_DEVICE_TYPE, existing_devices=existing_devices, parent=parent)


class DeviceMoSys(Device):
    add_device_dialog = AddMoSysDialog
    device_tab_view = None
    ffs_tab_view = None

    def __init__(self, name, address, **kwargs) -> None:
        super().__init__(name, address, **kwargs)
        # Autojoin Protection
        self.autojoin_mu_server = None
        #
        self._setting_device_type = StringSetting(
            attr_name="mosys_device_type",
            nice_name="Device Type",
            value=kwargs.get("mosys_device_type", ''),
            show_ui=False
        )
        if address in DEVICE_COLLECTION:
            self._setting_device_type.update_value(DEVICE_COLLECTION.get_device_with_address(address).device_type)
        else:
            DEVICE_COLLECTION.add_device(
                get_device_class(self._setting_device_type.get_value())
                (name, address, self._setting_device_type.get_value(), ConfigLocation.IN_CONFIG_FILE)
            )

    @classmethod
    def plug_into_ui(cls, menubar, tabs):
        if not cls.device_tab_view:
            cls.device_tab_view = MoSysDeviceMonitorTab(parent=tabs)
            DEVICE_COLLECTION.device_monitor = cls.device_tab_view
        if not cls.ffs_tab_view:
            cls.ffs_tab_view = MoSysTabViewFFSNodes(parent=tabs)
            DEVICE_COLLECTION.ffs_monitor = cls.ffs_tab_view

        tabs.addTab(cls.device_tab_view, 'Mo-Sys Devices')
        tabs.addTab(cls.ffs_tab_view, 'Mo-Sys File Sync')

    @classmethod
    def plugin_header_widget_config(cls):
        return []  # PluginHeaderWidgets.CONNECT_BUTTON # connect all button

    def device_settings(self):
        return super().device_settings() + [
            self._setting_device_type
        ]
    
    @classmethod
    def plugin_settings(cls):
        ''' Returns common settings that belong to all devices of this class. Maciej: Used for detecting new config loaded
        ''' 
        if cls.ffs_tab_view:
            address_list = []
            for index, row in enumerate(cls.ffs_tab_view.table.rows):
                address_list.append(row["Address"])

            for address in address_list:
                cls.ffs_tab_view.table.remove_item(address)

            cls.ffs_tab_view.fill_table()
            cls.ffs_tab_view.reset_config_bound_variables()
            cls.ffs_tab_view.update_project_dir()
            cls.ffs_tab_view.copy_FFS_files_if_not_in_local_dir()
            ShareFolderDirCandidate = cls.ffs_tab_view.try_find_share_dir_from_FFS()
            cls.ffs_tab_view.try_set_share_folder_dir(ShareFolderDirCandidate)

        return super().plugin_settings()

class DeviceWidgetMoSys(MoSysWidget):
    def __init__(self, name, device_hash, address, icons, parent=None) -> None:
        super().__init__(name, device_hash, address, icons, collection=DEVICE_COLLECTION, parent=parent)
