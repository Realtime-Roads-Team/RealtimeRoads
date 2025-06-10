from enum import Enum
import os
import sys

# This file should not import any other mosys_*.py files
# This file should only be used to define static variables and enum classes

# http://192.168.134.101:8080/v1/parameter/Data.SendToUDP2
# old endpoint for udp channels
# http://192.168.134.101:8080/v2/main/trackingFrame
# for tracking frame data

MOSYS_DEVICE_TYPE = "MoSys"

class MoSysStatus(str):
    """
    Types inheriting from MoSysStatus must also inherit from enum.Enum in this order:

    class CustomStatusType(MoSysStatus, Enum):
    """
    INVALID = "INVALID"

    @staticmethod
    def _get_str(index, status_type):
        i = 0
        for enum in status_type:
            if i == index:
                return enum
            i += 1
        return None

    @staticmethod
    def _get_int(status_str, status_type):
        i = 0
        for enum in status_type:
            if status_str == enum:
                return i
            i += 1
        return -1

    @classmethod
    def get_str(cls, index):
        return MoSysStatus._get_str(index, cls)

    @classmethod
    def get_int(cls, status_str):
        return MoSysStatus._get_int(status_str, cls)


class UserEditState(Enum):
    """
    These states determine if the user is able to edit the cell's value or not
    """
    NotEditable = 0
    Inspectable = 1
    EnumEditable = 2
    PureEditable = 3


class MoSysSupportedDeviceTypes(str, Enum):
    STARTRACKER = "StarTracker"
    #BLACKMAGIC = "Blackmagic"
    #UNREAL_INSTANCE = "Unreal"

    @staticmethod
    def get_icon_mapping(supported_type):
        return os.path.join("device_icons", {
            MoSysSupportedDeviceTypes.STARTRACKER: "mosys.png",
            #MoSysSupportedDeviceTypes.BLACKMAGIC: "blackmagic.png",
            #MoSysSupportedDeviceTypes.UNREAL_INSTANCE: "unreal.png",
        }[supported_type])


class ConfigLocation(Enum):
    UNKNOWN = -1
    TEMPORARY = 0
    DISCOVERED = 1
    IN_CONFIG_FILE = 2


VERSION_DEBUG = False

NOT_IMPLEMENTED_MSG = "Cannot use. Implementation-specific. Please override."

REFRESH_TIME = 2
SERVICE_BROWSE_WAIT_TIME = 2
NETWORK_DATA_CHANNEL_INDEX = 1
NETWORK_DATA_CHANNELS = 3 + NETWORK_DATA_CHANNEL_INDEX

WORKING_DIRECTORY = os.getcwd()
RELATIVE_PATH_TO_DEVICES = "switchboard\\devices\\"
RELATIVE_PATH_TO_MOSYS = RELATIVE_PATH_TO_DEVICES + "mosys\\"
VERSION_FILE = RELATIVE_PATH_TO_MOSYS + "mosys_plugin_version.json"

INVALID_DATA = "NO_DATA"

SCHEMA = "http://"
PORT = "8080"
API = "v2"

USE_V2_FOR_UDP_CHANNELS = False

# All loggers that are currently printing information that we don't need / creates a noisy log
LOGGERS = ["concurrent", "concurrent.futures", "asyncio", "urllib3", "urllib3.connectionpool", "urllib3.util.retry", "urllib3.util", "urllib3.connection", "urllib3.response", "urllib3.poolmanager", "requests", "zeroconf"]

if USE_V2_FOR_UDP_CHANNELS:
    CHANNEL_IP_ADDRESS = "data/network/0/address"
    CHANNEL_PORT = "data/network/0/port"
    CHANNEL_SENDUDP = "data/0/sendUdp"
    CHANNEL_SEPARATOR = "0"
else:
    CHANNEL_IP_ADDRESS = "UDP.IP"
    CHANNEL_PORT = "UDP.Port"
    CHANNEL_SENDUDP = "Data.SendToUDP"
    CHANNEL_SEPARATOR = "UDP"

MAX_STARTRACKER_HOSTS = 4

TIGHT_VNC = 'C:/Program Files/TightVNC/tvnviewer.exe'
