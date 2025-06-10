from mosys.mosys_utils import *

METADATA = {
    "StarTracker": None
}


def get_metadata(type_):
    low_type = str(type_).lower()
    for entry in METADATA:
        if str(entry).lower() == low_type:
            return METADATA[entry]
    return None


sprint("Welcome to the Mo-Sys Switchboard Plugin.")
version = read_version_information()
for k in version:
    sprint(k + ": " + version[k])


sprint("Available Modules:")
for k in METADATA:
    sprint(k)
