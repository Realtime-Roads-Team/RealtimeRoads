import json
import logging
from subprocess import Popen
from switchboard.config import CONFIG
from switchboard.switchboard_logging import LOGGER
from PySide6 import QtWidgets, QtGui, QtCore
from .mosys_defines import *

IP_ADDR_REGEX = "^\\s*((([01]?[0-9]?[0-9]|2[0-4][0-9]|25[0-5])\\.){3}([01]?[0-9]?[0-9]|2[0-4][0-9]|25[0-5]))\\s*$"
SERVICE_REGEX = r"^(_{1}[a-zA-Z]+)\.{1}_tcp\.local\."  # supports only ._tcp.local.
DNS_REGEX = r"^[a-zA-Z]+-{1}0{1}.local."  # supports only .local.
INTEGER_REGEX = r"^[0-9]+"  # no maximum

ip_regex = QtCore.QRegularExpression(IP_ADDR_REGEX)
ip_validator = QtGui.QRegularExpressionValidator(ip_regex)

dns_regex = QtCore.QRegularExpression(DNS_REGEX)
dns_validator = QtGui.QRegularExpressionValidator(dns_regex)

service_regex = QtCore.QRegularExpression(SERVICE_REGEX)
service_validator = QtGui.QRegularExpressionValidator(service_regex)

integer_regex = QtCore.QRegularExpression(INTEGER_REGEX)
integer_validator = QtGui.QRegularExpressionValidator(integer_regex)


def sprint(printable=None):
    if printable is not None:
        print(f"{printable}")
    else:
        print("None was passed")

def sprintFFS(printable=None):
    if printable is not None:
        print(f"[File sync] {printable}")
    else:
        print("[File sync] None was passed")

def serror(printable=None):
    if printable is not None:
        print(f"Error: {str(printable)}")
    else:
        print("Error: None was passed")

def serrorFFS(printable=None):
    if printable is not None:
        print(f"Error: [File sync] {str(printable)}")
    else:
        print("Error: [File sync] None was passed")


def sdebug(printable=None, is_error=False):
    if is_error:
        serror(f"Debug: {printable}")
    else:
        sprint(f"Debug: {printable}")


def sdebug_full_stack():
    """
    def function_to_test():
        try:
            ... code ...
        except:
            sdebug_full_stack()
    """
    import traceback, sys
    exc = sys.exc_info()[0]
    stack = traceback.extract_stack()[:-1]  # last one would be sdebug_full_stack()
    if exc is not None:  # i.e. an exception is present
        del stack[-1]  # remove call of full_stack, the printed exception
        # will contain the caught exception caller instead
    trc = 'Traceback (most recent call last):\n'
    stackstr = trc + ''.join(traceback.format_list(stack))
    if exc is not None:
        stackstr += '  ' + traceback.format_exc().lstrip(trc)
    sdebug(stackstr, True)


def report_not_implemented():
    sdebug(NOT_IMPLEMENTED_MSG, True)


def get_device_path():
    return RELATIVE_PATH_TO_DEVICES + "mosys\\"


def get_device_full_path():
    return WORKING_DIRECTORY + "\\" + get_device_path()


def get_mosys_directory():
    return get_device_full_path()


def get_asset_from_folder(path, asset_name, use_full_path=False):
    if use_full_path:
        dir_path = os.path.join(get_device_full_path(), path)
    else:
        dir_path = os.path.join(get_device_path(), path)
    if asset_name in os.listdir(dir_path):
        return os.path.join(dir_path, asset_name)
    return None


def get_icon_mapping(supported_type):
    return os.path.join(get_device_path(), MoSysSupportedDeviceTypes.get_icon_mapping(supported_type))


def get_asset(asset_name):
    dir_path = get_mosys_directory()
    if asset_name in os.listdir(dir_path):
        return os.path.join(dir_path, asset_name)
    return None


def iterate_enum(iterable, condition, update_expr):
    for index, pair in enumerate(iterable):
        if condition(pair[0]):
            if index + 1 == len(iterable):
                update_expr(iterable[0])
            else:
                update_expr(iterable[index + 1])
            break

def get_object_attr_from_tree(obj, branches):
    """
    Compress multiple if statements into a single function call

    if obj:
        obj_attr = obj.attr
        if obj_attr:
            obj_attr_2 = obj_attr.attr
            if obj_attr_2:
                obj_attr_2.function()

    OR

    get_object_attr_from_tree(obj, ["attr", "attr", "function"])
    """
    if len(branches):
        for branch in branches:
            if hasattr(obj, branch):
                obj = getattr(obj, branch)
                if hasattr(obj, "__call__"):
                    obj = obj()
            else:
                sdebug(f"Object did not possess the desired attribute ({branch}) in the object-attribute tree", True)
                return None
    return obj


def read_config_ip_address(filepath, device_type):
    ipaddr = []
    with open(filepath) as config:
        data = json.load(config)
    try:
        devices = data["devices"][device_type]
        for entry in devices:
            try:
                ipaddr.append(devices[entry]["address"])
            except KeyError:
                if entry != "settings":
                    sprint("Reading Config Error: " + entry)
    except KeyError:
        pass
    return ipaddr


def read_config_ip_addresses(device):  # MoSys, Unreal, Blackmagic
    return read_config_ip_address(CONFIG.file_path, device)


def read_version_information():
    if not os.path.exists(VERSION_FILE):
        serror("Cannot read version of Unreal engine and Switchboard plugin. File does not exist.")
        return {}
    with open(VERSION_FILE) as version_info:
        return json.load(version_info)


def get_argb_from_int(integer):
    alpha = (integer >> 24) & 255
    red = (integer >> 16) & 255
    green = (integer >> 8) & 255
    blue = integer & 255
    return alpha, red, green, blue


def get_int_from_argb(argb):
    return argb[0] << 24 | argb[1] << 16 | argb[2] << 8 | argb[3]


WHITE_T = (255, 255, 255, 255)
WHITE_I = get_int_from_argb(WHITE_T)


def strip_lower_chars(string):
    """
    Strip the string of all lower characters (a-z)

    Useful for reducing a service type name down
    StarTracker => ST
    """
    return ''.join([letter for letter in string if ord('A') <= ord(letter) <= ord('Z')])


def enable_all_loggers():
    for logger_str in LOGGERS:
        logger = logging.getLogger(logger_str)
        if logger is not None:
            logger.disabled = False


def disable_all_loggers():
    for logger_str in LOGGERS:
        logger = logging.getLogger(logger_str)
        if logger is not None:
            logger.disabled = True


def has_vnc():
    return os.path.isfile(TIGHT_VNC)


def open_vnc(ip_address):
    if has_vnc():
        Popen([TIGHT_VNC, ip_address])
    else:
        print("Tight VNC not found at " + TIGHT_VNC)


def open_web(ip_address):
    Popen(["cmd.exe", "/c", "start", SCHEMA + ip_address])
