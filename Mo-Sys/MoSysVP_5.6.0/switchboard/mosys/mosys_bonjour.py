from enum import Enum
from zeroconf import IPVersion, ServiceBrowser, ServiceStateChange, Zeroconf, ZeroconfServiceTypes
from typing import cast, Union
import time
import socket
from mosys_defines import REFRESH_TIME, MoSysSupportedDeviceTypes, MAX_STARTRACKER_HOSTS


class BonjourServiceType(str, Enum):
    STARTRACKER = "_startracker._tcp.local."
    #MOSYS_API = "_mo-sys_api._tcp.local."
    #BLACKMAGIC = "_blackmagic._tcp.local."

    @staticmethod
    def map_to_supported_device_type(service_type):
        if service_type == BonjourServiceType.STARTRACKER:
            return MoSysSupportedDeviceTypes.STARTRACKER
        #elif service_type == BonjourServiceType.MOSYS_API:
        #    return MoSysSupportedDeviceTypes.UNREAL_INSTANCE
        #elif service_type == BonjourServiceType.BLACKMAGIC:
        #    return MoSysSupportedDeviceTypes.BLACKMAGIC
        return "INVALID"


class AlternativeDiscoveryMethod:
    @staticmethod
    def discover(service_type):
        query_split = "StarTracker-0.local".split("-0")
        if service_type == BonjourServiceType.STARTRACKER:
            queried = []
            query = query_split[0] + query_split[1]
            for i in range(MAX_STARTRACKER_HOSTS):
                try:
                    host = socket.gethostbyname(query)
                    queried.append(host)
                except socket.gaierror:
                    pass
                finally:
                    query = query_split[0] + "-" + str(i + 2) + query_split[1]
            return queried
        return []


class LocalDNSType(str, Enum):
    NAME = "NAME"
    SERVICE = "SERVICE"
    BOTH = "BOTH"


class MoSysBonjourEntry(object):
    def __init__(self, stype, info):
        split = stype.split('.', 1)
        self.service_name = split[0]
        self.service_type = split[1]
        self.service_info = info
        self.service_addresses = ["%s:%d" % (addr, cast(int, self.service_info.port)) for addr in self.service_info.parsed_scoped_addresses()]

    def is_real(self):
        return "(Fake) " not in self.service_name

    def is_service_type_of(self, stype):  # _startracker._tcp.local.
        return stype in self.service_type

    def get_ipv4_address(self, with_port=False):  # get first ipv4 address -- sometimes returns other adapters
        return [x if with_port else x.split(':')[0] for x in self.service_addresses if "." in x]


class MoSysServiceBrowser(ServiceBrowser):
    def __init__(self, browsable_services, ip_version=IPVersion.V4Only):
        self.zeroconf = Zeroconf(ip_version=ip_version)
        self.browsable_services = browsable_services
        self._found_services = []
        super().__init__(zc=self.zeroconf, type_=self.browsable_services, handlers=[self.listen_state_change])

    def listen_state_change(self, zeroconf: Zeroconf, service_type: str, name: str, state_change: ServiceStateChange) -> None:
        if state_change is ServiceStateChange.Added:
            info = zeroconf.get_service_info(service_type, name)
            if info:
                self._found_services.append(MoSysBonjourEntry(name, info))

    def get_found_services(self):
        return self._found_services

    def __del__(self):
        self.zeroconf.close()

    @staticmethod
    def discover(service_type: Union[str, list]):
        discovery = MoSysServiceBrowser(service_type)
        time.sleep(REFRESH_TIME)
        return discovery.get_found_services()

