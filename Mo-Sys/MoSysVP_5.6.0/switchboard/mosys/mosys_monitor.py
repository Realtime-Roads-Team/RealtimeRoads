from PySide6 import QtGui, QtCore, QtWidgets
from .mosys_table import MoSysMonitorTable
from .mosys_device import DEVICE_COLLECTION
from .mosys_device_types import get_device_icons, get_device_status, MoSysSupportedDeviceTypes
from .mosys_widget import MoSysMonitorTab


class MoSysDeviceMonitorTab(MoSysMonitorTab):

    def __init__(self, parent):
        super().__init__(table=MoSysMonitorTable(), parent=parent)
        if DEVICE_COLLECTION.device_monitor is None:
            DEVICE_COLLECTION.device_monitor = self

        for device in DEVICE_COLLECTION:
            self.add_item_to_table(device)

        col = self.table.get_column("Status")
        for supported_type in MoSysSupportedDeviceTypes:
            col.add_tuple_values(supported_type.value,
                                 [(status.value, get_device_icons(supported_type.value)
                                   .get_status_pixmap(get_device_status(supported_type.value).get_int(status.value)))
                                  for status in get_device_status(supported_type.value)])
