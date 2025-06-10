from __future__ import absolute_import
import sys
import os
from .mosys_utils import get_mosys_directory, read_version_information, sprint, disable_all_loggers
from .mosys_defines import MoSysSupportedDeviceTypes, VERSION_DEBUG

# Disable all loggers before starting the plugin: MVP-3599
disable_all_loggers()

SWITCHBOARD_PATH = os.getcwd() + "\\switchboard\\"
DEVICES_PATH = os.getcwd() + "\\switchboard\\devices\\"
if SWITCHBOARD_PATH not in sys.path:
    sys.path.append(SWITCHBOARD_PATH)
if DEVICES_PATH not in sys.path:
    sys.path.append(DEVICES_PATH)
if get_mosys_directory() not in sys.path:
    sys.path.append(get_mosys_directory())

sprint("Welcome to the Mo-Sys Switchboard Plugin")
sprint("(This plugin is not fully released and may not work.)")

if VERSION_DEBUG:
    version = read_version_information()
    for key in version:
        sprint(f"{key}: {version[key]}")

sprint("Currently, this plugin supports connecting to: ")
sprint("FreeFileSync")
for device_type in MoSysSupportedDeviceTypes:
    sprint(device_type.value)
