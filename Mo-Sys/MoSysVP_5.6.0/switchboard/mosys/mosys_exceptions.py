class MoSysException(Exception):
    def __init__(self, *args):
        super().__init__(args)

    def __str__(self):
        return f'An error was raised as a result of the MoSys Plugin, '


class SwitchboardException(MoSysException):
    def __init__(self, *args):
        super().__init__(args)

    def __str__(self):
        return super().__str__() + "Switchboard Plugin Error: "


class MoSysIllegalOperation(MoSysException):
    def __init__(self, reason, *args):
        super().__init__(args)
        self.reason = reason

    def __str__(self):
        return super().__str__() + "You cannot perform this action: " + self.reason


class MoSysPathException(SwitchboardException):
    def __init__(self, got_path, desired_path, *args):
        super().__init__(args)
        self.got_path = got_path
        self.desired_path = desired_path

    def __str__(self):
        return super().__str__() + f'Switchboards search path is non-standard. {self.desired_path} was desired but got {self.got_path}'


class StarTrackerException(MoSysException):
    def __init__(self, *args):
        super().__init__(args)

    def __str__(self):
        return super().__str__() + "StarTracker Error: "


class StarTrackerInvalidNetworkDataRequest(StarTrackerException):
    def __init__(self, replace, *args):
        super().__init__(args)
        self.replacement_character = replace

    def __str__(self):
        return super().__str__() + f"Request for networking data, specifically the 3 UDP channels, was invalid. NetId must be {self.replacement_character}"


class StarTrackerIndexOutOfRange(StarTrackerException):
    def __init__(self, index, min, max, *args):
        super().__init__(args)
        self.invalid_index = index
        self.min = min
        self.max = max

    def __str__(self):
        return super().__str__() + f'Index was f{"above" if self.invalid_index > self.max else "below"} the bounds of the StarTracker array'


class StarTrackerInvalidIP(StarTrackerException):
    def __init__(self, ip, *args):
        super().__init__(args)
        self.invalid_ip = ip

    def __str__(self):
        return super().__str__() + f'{self.invalid_ip} does not correspond to any StarTrackers that are currently discovered.'


class StarTrackerInvalidUnique(StarTrackerException):
    def __init__(self, ip, *args):
        super().__init__(args)
        self.valid_not_unique_ip = ip

    def __str__(self):
        return super().__str__() + f'{self.valid_not_unique_ip} already exists in the StarTracker table'