from mosys.mosys_device import MoSysDevice, MoSysDefaultIcons, MoSysDeviceNodeWidget
from mosys.mosys_utils import *
import requests
# ---------------------------------------------------------------------
# Node section


class ConnectionButton(QtWidgets.QPushButton):

    def __init__(self, is_active, parent=None):
        super().__init__(parent=parent)
        self._is_active = is_active
        self.set_active(is_active)
        self.released.connect(self._set_active)

    def _set_active(self):
        self.set_active(not self._is_active)

    def set_active(self, is_active):
        self._is_active = is_active
        if self._is_active:
            self.setText("ACTIVE")
            self.setStyleSheet("QPushButton { color : green; }")
        else:
            self.setText("INACTIVE")
            self.setStyleSheet("QPushButton { color : red; }")

    def is_active(self):
        return self._is_active


class StarTrackerUdpChannel(QtWidgets.QWidget):
    def __init__(self, index, device, parent=None):
        super().__init__(parent=parent)
        self.channel_index = index
        self.device = device
        self.ip_address = device.device_address
        self.is_channel_locked = False
        self.lock_button = QtWidgets.QPushButton()
        self.lock_button.released.connect(self.lock_unlock_row)
        self.connect_button = ConnectionButton(False)
        self.ip_field = QtWidgets.QLineEdit("0.0.0.0")
        self.ip_field.setValidator(ip_validator)
        self.port_line_edit = QtWidgets.QLineEdit("8001")
        self.validator = QtGui.QIntValidator(0, 0xffff)
        self.port_line_edit.setValidator(self.validator)
        self.lock_unlock_row(True)

    def __del__(self):
        self.device = None

    def lock_unlock_row(self, is_first_call=False):
        self.is_channel_locked = not self.is_channel_locked
        self.lock_button.setText("Unlock" if self.is_channel_locked else "Lock")
        self.lock_button.setIcon(QtGui.QIcon(get_asset("locked.png" if self.is_channel_locked else "unlocked.png")))
        for widget in self.get_widget_row():
            if widget != self.lock_button:
                widget.setEnabled(not self.is_channel_locked)

        if self.is_channel_locked and not is_first_call:
            self._set_new_channel_data()

    def get_widget_row(self):
        return self.connect_button, self.ip_field, self.port_line_edit, self.lock_button

    def _set_new_channel_data(self):
        if self.device is not None:
            self.device.set_channel_data(self.channel_index, (self.ip_field.text(), self.port_line_edit.text(),
                                                         self.connect_button.is_active()))


class StarTrackerConnectionsWidget(MoSysDeviceNodeWidget):

    def __init__(self, device, parent=None):
        super().__init__(device, parent=parent)
        self.rows = []
        self.ip_address = device.device_address
        self.vertical_layout = QtWidgets.QVBoxLayout()
        self.horizontal_layout = QtWidgets.QHBoxLayout()
        self.setLayout(self.vertical_layout)

        self.name_ip_layout = QtWidgets.QVBoxLayout()
        self.name_label = QtWidgets.QLabel(device.device_name)
        self.name_label.setAlignment(QtCore.Qt.AlignmentFlag.AlignCenter)
        self.name_ip_layout.addWidget(self.name_label)
        self.ip_address_label = QtWidgets.QLabel(device.device_address)
        self.ip_address_label.setAlignment(QtCore.Qt.AlignmentFlag.AlignCenter)
        self.ip_address_label.setStyleSheet("QLabel { color : rgb(255, 255, 255); }")
        self.name_ip_layout.addWidget(self.ip_address_label)
        self.vertical_layout.insertLayout(0, self.name_ip_layout, 3)
        self.vertical_layout.insertLayout(1, self.horizontal_layout, 3)

        self.connections_layout = QtWidgets.QVBoxLayout()
        self.horizontal_layout.insertLayout(0, self.connections_layout, 1)
        self.input_field_layout = QtWidgets.QVBoxLayout()
        self.horizontal_layout.insertLayout(1, self.input_field_layout, 3)
        self.port_layout = QtWidgets.QVBoxLayout()
        self.horizontal_layout.insertLayout(2, self.port_layout, 1)
        self.lock_layout = QtWidgets.QVBoxLayout()
        self.horizontal_layout.insertLayout(3, self.lock_layout, 1)

        for connection in range(NETWORK_DATA_CHANNEL_INDEX, NETWORK_DATA_CHANNELS):
            udpchannel = StarTrackerUdpChannel(connection, self.device)
            self.rows.append(udpchannel)
            row = udpchannel.get_widget_row()
            self.connections_layout.addWidget(row[0])
            self.input_field_layout.addWidget(row[1])
            self.port_layout.addWidget(row[2])
            self.lock_layout.addWidget(row[3])

        self._update_udp_channels()

    def _update_udp_channels(self):
        try:
            if self.device is not None:
                network_data = self.device.networkData
                for channel in self.rows:
                    if channel.is_channel_locked:
                        data_slot = network_data.channels[channel.channel_index]
                        channel.ip_field.setText(data_slot["address"])
                        channel.port_line_edit.setText(str(data_slot["port"]))
                        channel.connect_button.set_active(data_slot["sendUdp"])
            else:
                sdebug("No device for node widget found", True)
        except Exception as e:
            sdebug(e)

    def update_node_status(self, status):
        colour_tuple = ST_STATUS_COLOURS.get_status_colour(status)
        if colour_tuple:
            self.ip_address_label.setStyleSheet("QLabel { color : rgb(" +
                                                str(colour_tuple[0]) + ", " +
                                                str(colour_tuple[1]) + ", " +
                                                str(colour_tuple[2]) + "); }")
            self.ip_address_label.setToolTip(StarTrackerStatus.get_str(status))
            self._update_udp_channels()


# ---------------------------------------------------------------------

class TrackingFrameData(object):
    translation = {}
    rotation = {}
    timecode = "00:00:00:00"
    camera_id = 0
    lens_data = {}
    status = 0

    def __init__(self, json_data):
        self.translation = json_data["translation"]
        self.rotation = json_data["rotation"]
        self.timecode = json_data["timecode"]
        self.camera_id = int(json_data["cameraID"])
        self.lens_data = json_data["lensData"]
        self.status = int(json_data["status"])


FAKE_TRACKING_DATA = TrackingFrameData({
  "translation": {
    "x": 0,
    "y": 0,
    "z": 0
  },
  "rotation": {
    "xr": 90,
    "yr": 90,
    "zr": 90
  },
  "timecode": "00:00:00:00",
  "status": 0,
  "cameraID": -1,
  "lensData": {
    "hasLensData": True,
    "focalDist": 10,
    "fieldOfView": 90
  }
})


class NetworkData(object):
    #  http://192.168.134.101:8080/v2/data/network/2/address
    #  http://192.168.134.101:8080/v2/data/network/2/port
    #  http://192.168.134.101:8080/v2/data/2/sendUdp

    def __init__(self):
        self.channels = {
            1: {
                "address": "0.0.0.0",
                "port": 0,
                "sendUdp": False
            },
            2: {
                "address": "0.0.0.0",
                "port": 0,
                "sendUdp": False
            },
            3: {
                "address": "0.0.0.0",
                "port": 0,
                "sendUdp": False
            },
        }

    def _channel_entry_to_string(self, index):
        channel = self.channels[index]
        return "CHANNEL " + str(index) + "\nAddress: " + str(channel["address"]) + "\nPort: " + str(channel["port"]) + \
               "\nSendUdp: " + str(channel["sendUdp"]) + "\n"

    def __str__(self):
        string = ""
        for i in range(NETWORK_DATA_CHANNEL_INDEX, NETWORK_DATA_CHANNELS):
            string += self._channel_entry_to_string(i)
        return string

    @staticmethod
    def get_index(index):
        return "" if index < 2 else str(index)

    @staticmethod
    def get_current_data(rest_url):
        network_data = NetworkData()
        if CHANNEL_SEPARATOR not in CHANNEL_IP_ADDRESS or CHANNEL_SEPARATOR not in CHANNEL_PORT or CHANNEL_SEPARATOR not in CHANNEL_SENDUDP:
            sdebug("Failed to get current data, invalid CHANNEL query", True)
            return
        rest_url_addr = CHANNEL_IP_ADDRESS
        rest_url_port = CHANNEL_PORT
        rest_url_sendudp = CHANNEL_SENDUDP
        separator = CHANNEL_SEPARATOR
        if USE_V2_FOR_UDP_CHANNELS:
            addr_split = rest_url_addr.split(separator)
            port_split = rest_url_port.split(separator)
            udp_split = rest_url_sendudp.split(separator)
            for i in range(NETWORK_DATA_CHANNEL_INDEX, NETWORK_DATA_CHANNELS):
                try:
                    addr_response = requests.get(rest_url + addr_split[0] + str(i) + addr_split[1])
                    network_data.channels[i]["address"] = addr_response.json()["address"]
                    port_response = requests.get(rest_url + port_split[0] + str(i) + port_split[1])
                    network_data.channels[i]["port"] = int(port_response.json()["port"])
                    sendudp_response = requests.get(rest_url + udp_split[0] + str(i) + udp_split[1])
                    network_data.channels[i]["sendUdp"] = bool(sendudp_response)
                except (KeyError, requests.exceptions.ConnectionError):
                    sprint(f"Failed to get network data from an address or port: {rest_url}")
        else:
            for i in range(NETWORK_DATA_CHANNEL_INDEX, NETWORK_DATA_CHANNELS):
                try:
                    addr_response = requests.get(
                        rest_url + rest_url_addr.replace(separator, separator + NetworkData.get_index(i)))
                    network_data.channels[i]["address"] = str(addr_response.json()["result"])
                    port_response = requests.get(
                        rest_url + rest_url_port.replace(separator, separator + NetworkData.get_index(i)))
                    network_data.channels[i]["port"] = int(port_response.json()["result"])
                    sendudp_response = requests.get(rest_url + rest_url_sendudp + NetworkData.get_index(i))
                    network_data.channels[i]["sendUdp"] = True if (
                                str(sendudp_response.json()["result"]) == "True") else False
                except (KeyError, requests.exceptions.ConnectionError):
                    serror(f"Failed to get network data from an address and/or port: {rest_url}")
        return network_data

    @staticmethod
    def check_channel_index(channel_index):
        if channel_index < NETWORK_DATA_CHANNEL_INDEX or channel_index > NETWORK_DATA_CHANNELS - \
                NETWORK_DATA_CHANNEL_INDEX:
            sdebug("Failed to set current data, invalid channel_index", True)
            return False
        return True

    def send_current_ip(self, rest_url, channel_index, ip):
        if not self.check_channel_index(channel_index):
            return
        rest_url_addr = CHANNEL_IP_ADDRESS
        separator = CHANNEL_SEPARATOR
        if USE_V2_FOR_UDP_CHANNELS:
            sdebug("V2 UDP API not implemented in StarTracker", True)
        else:
            try:
                s_ip_addr = {"idempotency_key": 0, "Value": ip}
                sprint(f"Setting IP address to {ip}")
                addr_response = requests.put(rest_url + rest_url_addr.replace(separator, separator + NetworkData.get_index(channel_index)), data=json.dumps(s_ip_addr))
                sprint("Success" if addr_response.status_code == 202 else "Error code: " + str(addr_response.status_code))
            except requests.exceptions.ConnectionError:
                serror(f"Failed to set UDP channel {channel_index}'s IP address using: {rest_url}")

    def send_current_send_udp(self, rest_url, channel_index, sendUdp):
        if not self.check_channel_index(channel_index):
            return
        rest_url_sendudp = CHANNEL_SENDUDP
        separator = CHANNEL_SEPARATOR
        if USE_V2_FOR_UDP_CHANNELS:
            sdebug("V2 UDP API not implemented in StarTracker", True)
        else:
            try:
                s_sendudp = {"idempotency_key": 0, "Value": sendUdp}
                sprint(f"Setting SendUDP to {sendUdp}")
                sendudp_response = requests.put(rest_url + rest_url_sendudp.replace(separator, separator + NetworkData.get_index(channel_index)), data=json.dumps(s_sendudp))
                sprint("Success" if sendudp_response.status_code == 202 else "Error code: " + str(sendudp_response.status_code))
            except requests.exceptions.ConnectionError:
                serror(f"Failed to set UDP channel {channel_index}'s sendUdp using: {rest_url}")

    def send_current_port(self, rest_url, channel_index, port):
        if not self.check_channel_index(channel_index):
            return
        rest_url_port = CHANNEL_PORT
        separator = CHANNEL_SEPARATOR
        if USE_V2_FOR_UDP_CHANNELS:
            sdebug("V2 UDP API not implemented in StarTracker", True)
        else:
            try:
                s_port = {"idempotency_key": 0, "Value": port}
                sprint(f"Setting Port to {port}")
                port_response = requests.put(rest_url + rest_url_port.replace(separator, separator + NetworkData.get_index(channel_index)), data=json.dumps(s_port))
                sprint("Success" if port_response.status_code == 202 else "Error code: " + str(port_response.status_code))
            except requests.exceptions.ConnectionError:
                serror(f"Failed to set UDP channel {channel_index}'s Port using: {rest_url}")


class StarTrackerStatus(MoSysStatus, Enum):
    UNDEFINED = "Undefined",
    TRACKING = "Tracking",
    OPTICAL_GOOD = "Optical Good",
    OPTICAL_ACCEPTABLE = "Optical Acceptable",
    OPTICAL_UNRELIABLE = "Optical Unreliable",
    OPTICAL_UNSTABLE = "Optical Unstable",
    OPTICAL_LOST = "Optical Lost",
    LOST_TOO_FEW_STARS = "Lost Too Few Stars",
    LOCATION_SEARCHING = "Location Searching",
    BUSY_OR_WAITING = "Busy or Waiting",
    BUSY_LOADING_MAP = "Busy Loading Map",
    NO_MAP_LOADED = "No Map Loaded",
    TEST_SIGNAL = "Test Signal",
    MECHANICAL_ENCODERS_ONLY = "Mechanical Encoders Only",
    IO_ERROR = "I/O Error",
    INTERNAL_ERROR = "Internal Error"


class StarTrackerStatusIcons(MoSysDefaultIcons):
    def get_status_colour(self, status):
        status = StarTrackerStatus.get_str(status)
        if status is None:  # disabled
            return 0, 0, 0
        elif status == StarTrackerStatus.UNDEFINED:
            return 0, 0, 0
        elif status == StarTrackerStatus.TRACKING:
            return 255, 127, 0
        elif status == StarTrackerStatus.OPTICAL_GOOD:
            return 0, 255, 0
        elif status == StarTrackerStatus.OPTICAL_ACCEPTABLE:
            return 0, 200, 0
        elif status == StarTrackerStatus.OPTICAL_UNRELIABLE:
            return 0, 127, 0
        elif status == StarTrackerStatus.OPTICAL_UNSTABLE:
            return 127, 127, 0
        elif status == StarTrackerStatus.OPTICAL_LOST:
            return 255, 50, 0
        elif status == StarTrackerStatus.LOST_TOO_FEW_STARS:
            return 255, 0, 0
        elif status == StarTrackerStatus.LOCATION_SEARCHING:
            return 0, 127, 127
        elif status == StarTrackerStatus.BUSY_OR_WAITING:
            return 0, 200, 200
        elif status == StarTrackerStatus.BUSY_LOADING_MAP:
            return 0, 255, 255
        elif status == StarTrackerStatus.NO_MAP_LOADED:
            return 255, 165, 0
        elif status == StarTrackerStatus.TEST_SIGNAL:
            return 255, 255, 255
        elif status == StarTrackerStatus.MECHANICAL_ENCODERS_ONLY:
            return 127, 127, 127
        elif status == StarTrackerStatus.IO_ERROR:
            return 255, 0, 0
        elif status == StarTrackerStatus.INTERNAL_ERROR:
            return 255, 0, 0
        return None


ST_STATUS_COLOURS = StarTrackerStatusIcons()


class StarTrackerDevice(MoSysDevice):

    def __init__(self, name, ip, dtype, location):
        super().__init__(name, ip, dtype, location)
        self.hardware_id = INVALID_DATA
        self.trackingData = None
        self.networkData = None
        self.device_node_widget_type = StarTrackerConnectionsWidget

    def _form_update_request(self, key):
        return SCHEMA + self.device_address + ":" + PORT + "/" + API + "/" + key

    def _form_old_update_request(self, key):
        return SCHEMA + self.device_address + ":" + PORT + "/v1/parameter/" + key

    def _form_udp_update_request(self, key=""):
        return self._form_update_request(key) if USE_V2_FOR_UDP_CHANNELS else self._form_old_update_request(key)

    def _can_connect(self):
        self.hardware_id = INVALID_DATA
        try:
            response = requests.get(self._form_update_request("hardwareId"))
            self.hardware_id = response.json()["hardware_id"]
        except (KeyError, requests.exceptions.ConnectionError):
            self.hardware_id = INVALID_DATA
        return super()._can_connect() and self.hardware_id != INVALID_DATA

    def _update_tracking_data(self):
        response = requests.get(self._form_update_request("main/trackingFrame"))
        self.trackingData = TrackingFrameData(response.json())

    def _update_network_data(self):
        self.networkData = NetworkData.get_current_data(self._form_udp_update_request())

    def set_channel_data(self, channel_index, data=None):
        if data is None or len(data) != 3:
            serror("Could not update UDP channel as there was no valid data supplied.")
            return
        url = self._form_udp_update_request()
        try:
            if self.networkData.channels[channel_index]["address"] != data[0]:
                self.networkData.send_current_ip(url, channel_index, data[0])
            if str(self.networkData.channels[channel_index]["port"]) != data[1]:
                self.networkData.send_current_port(url, channel_index, data[1])
            if self.networkData.channels[channel_index]["sendUdp"] != data[2]:
                self.networkData.send_current_send_udp(url, channel_index, data[2])
        except KeyError as ke:
            serror(f"Setting channel data because an exception was thrown: {ke}")

    def disconnect(self):
        super().disconnect()
        self.update_widget_icon(ST_STATUS_COLOURS.get_status_pixmap(-1), "Disconnected")
        self.device_widget.connect_button.setChecked(False)

    def _update(self):
        self._update_tracking_data()
        self._update_network_data()
        self.update_widget_icon(ST_STATUS_COLOURS.get_status_pixmap(self.trackingData.status),
                                StarTrackerStatus.get_str(self.trackingData.status))

    def report_status(self):
        if self.trackingData is None:
            return super().report_status()
        return self.trackingData.status
