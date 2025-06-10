from .mosys_defines import MoSysSupportedDeviceTypes
from .mosys_device_type_startracker import StarTrackerDevice, ST_STATUS_COLOURS, StarTrackerStatus
#from .mosys_device_type_blackmagic import BlackmagicDevice
#from .mosys_device_type_unreal import UnrealDevice

# Put all device types in here and link to their supported type definitions


def get_device_class(supported_type_string):
    return {
        MoSysSupportedDeviceTypes.STARTRACKER.value: StarTrackerDevice,
        #MoSysSupportedDeviceTypes.BLACKMAGIC.value: BlackmagicDevice,
        #MoSysSupportedDeviceTypes.UNREAL_INSTANCE.value: UnrealDevice,
    }[supported_type_string]


def get_device_status(supported_type_string):
    return {
        MoSysSupportedDeviceTypes.STARTRACKER: StarTrackerStatus,
        #MoSysSupportedDeviceTypes.UNREAL_INSTANCE: StarTrackerStatus
    }[supported_type_string]


def get_device_icons(supported_type_string):
    return {
        MoSysSupportedDeviceTypes.STARTRACKER: ST_STATUS_COLOURS,
        #MoSysSupportedDeviceTypes.UNREAL_INSTANCE: ST_STATUS_COLOURS,
    }[supported_type_string]
