# from mosys_monitor import MoSysTabView
from PySide6 import QtGui, QtCore, QtWidgets
from PySide6.QtWidgets import QPushButton
from .mosys_table import MoSysMonitorFFSSyncTable
from .mosys_device import DEVICE_COLLECTION
from .mosys_widget import MoSysMonitorTab
from .FFS_utils import FFS_utils, sprintFFS, serrorFFS
from switchboard.config import CONFIG
import os
import subprocess
import json

class MoSysTabViewFFSNodes(MoSysMonitorTab):

    def __init__(self, parent):
        super().__init__(table=MoSysMonitorFFSSyncTable(), parent=parent)
        
        self.update_project_dir()
        self.copy_FFS_files_if_not_in_local_dir()

        self.share_folder_dir = ''
        self.from_mapped_drive_proj_dir = ''
        ShareFolderDirCandidate = self.try_find_share_dir_from_FFS()

        MoSysMonitorFFSSyncTable.save_sync_tooltip_reference(self.update_sync_files_tooltip)

        button_layout_ffs = QtWidgets.QHBoxLayout()
        button_layout_ffs_shared = QtWidgets.QHBoxLayout()

        self.copy_options = QtWidgets.QComboBox()
        for mode in FFS_utils.SyncFileDict.keys():
            self.copy_options.addItem(mode)

        button_layout_ffs.addWidget(self.copy_options)

        self.copy = QtWidgets.QPushButton('Sync Files')
        button_layout_ffs.addWidget(self.copy)
        self.copy.clicked.connect(
            self.on_copy_clicked)
        self.copy.setToolTip('Sync from local computer to devices:')

        self.open_ffs = QPushButton('Open Sync UI')
        button_layout_ffs.addWidget(self.open_ffs)
        self.open_ffs.clicked.connect(
            self.on_open_FFS_clicked)
        self.map_device = QPushButton('Map device folder')
        button_layout_ffs.addWidget(self.map_device)
        self.map_device.clicked.connect(
            self.on_map_device_clicked)
        self.map_device.setToolTip('Map network drives from the devices IPs, e.g \\\\IP\\Share_folder_name')

        self.refresh_sync = QPushButton('Refresh')
        button_layout_ffs.addWidget(self.refresh_sync)
        self.refresh_sync.clicked.connect(
            self.on_refresh_sync)

        self.config_path_browse_button = QtWidgets.QPushButton("Browse 'Share' directory ")
        self.config_path_browse_button.clicked.connect(
            self.on_browse_share_dir)
        self.config_path_browse_button.setToolTip("Select the folder within the project path that is the Share folder on Render Nodes")
        button_layout_ffs_shared.addWidget(self.config_path_browse_button)
        
        self.share_folder_text = QtWidgets.QLineEdit(self)
        self.share_folder_text.setEnabled(False)
        self.share_folder_text.setToolTip('Share folder directory')
        button_layout_ffs_shared.addWidget(self.share_folder_text)
        
        self.top_layout.insertLayout(1, button_layout_ffs)
        self.top_layout.insertLayout(2, button_layout_ffs_shared)

        if DEVICE_COLLECTION.ffs_monitor is None:
            DEVICE_COLLECTION.ffs_monitor = self

        self.fill_table()
        
        self.try_set_share_folder_dir(ShareFolderDirCandidate)

    def fill_table(self):
        # add Unreal and nDisplay devices from config json file
        self.table.sync_names = []
        self.table.sync_addresses = []
        sync_devices_dict = self.table.read_sync_devices_XML()

        for deviceType, devices in CONFIG._device_data_from_config.items():
            if str(deviceType) == 'nDisplay' or str(deviceType) == 'Unreal':
                for device in devices:
                    address = device["address"]
                    name = device["name"]
                    tempDict = (device['kwargs'])
                    roles =''
                    try:
                        sync_flag = sync_devices_dict[name]
                    except:
                        sync_flag = 'Yes'

                    if 'roles' in tempDict:
                        roles = tempDict['roles']
                    if device is not None and address not in self.table.sync_addresses:
                        if roles:
                            try:
                                self.table.add_item(deviceType, name, address, ', '.join(roles), sync_flag)
                                if sync_flag == 'Yes':
                                    self.table.sync_addresses.append(address)
                                    self.table.sync_names.append(name)
                            except Exception as e:    
                                print(e)
                        else:
                            try:
                                self.table.add_item(deviceType, name, address, 'Role', sync_flag)
                                if sync_flag == 'Yes':
                                    self.table.sync_addresses.append(address)
                                    self.table.sync_names.append(name)
                            except Exception as e:    
                                print(e)
        self.update_sync_files_tooltip(self.table.sync_names)

    def add_item_to_table(self, device):
        if device is not None and device.device_address not in self.table.sync_addresses:
            self.table.sync_addresses.append(device.device_address)
            self.table.sync_names.append(device.name)
            self.table.add_item(device.device_type, device.device_name, device.device_address, "Yes")

    def remove_item_from_table(self, device):
        if device is not None and device.device_address in self.table.sync_addresses:
            self.table.sync_addresses.remove(device.device_address)
            self.table.sync_names.remove(device.name)
            self.table.remove_item(device.device_address)

    def on_open_FFS_clicked(self):
        FreeFileSync = 'C:\\Program Files\\FreeFileSync\\FreeFileSync.exe'
        mode = self.copy_options.currentText()
        SyncFile = self.ProjectDirectory + "\\Saved\\SaveGames\\FFS\\FFS_" + mode + ".ffs_gui"
        if os.path.isfile(FreeFileSync):
            if os.path.isfile(SyncFile):
                sprintFFS("Opening FreeFileSync " + mode)
                command = "\"" + FreeFileSync + "\"" + " " + "\"" + SyncFile + "\""
                subprocess.Popen(command, shell=True)
                return
            else:
                sprintFFS("No GUI file found in the project /Saved/SaveGames/FFS")
        else:
            sprintFFS("Please install FreeFileSync locally to use this feature.")

    def set_directories(self):
        try:
            if self.from_mapped_drive_proj_dir != '':
                if not FFS_utils.setDirectories(self.ProjectDirectory, self.table.sync_addresses, self.from_mapped_drive_proj_dir):
                    serrorFFS("Cannot set directories")
        except IndexError:
            serrorFFS("No uproject path was set in Switchboard config json, cannot set FFS directories.")
            serrorFFS("Please set this in Switchboard via Settings -> All -> Project Settings -> uProject Path.")

    def on_copy_clicked(self):
        if CONFIG.UPROJECT_PATH.get_value() == '':
            serrorFFS("No uproject path was set in Switchboard config json, cannot set FFS directories.")
            serrorFFS("Please set this in Switchboard via Settings -> All -> Project Settings -> uProject Path.")
            return
        if len(self.table.sync_addresses) == 0:
            serrorFFS("No Unreal or nDisplay devices selected")
            return
        if(self.share_folder_dir == ''):
            serrorFFS("Share folder not selected, sync files")
            return

        for key, value  in FFS_utils.SyncFileDict.items():
            if self.copy_options.currentText() == key:
                if FFS_utils.copy(value, self.ProjectDirectory) == True:
                    sprintFFS("Syncing " + key)
                else:
                    serrorFFS("Couldn't sync " + key)

    def on_map_device_clicked(self):
        share_folder = ''
        if self.share_folder_dir != '':
            share_folder = self.share_folder_dir.rsplit('\\',1)[1]
        else:
            share_folder = 'Share'
            sprintFFS("Assuming the share folder is called \'Share\'")
        for ip in self.table.sync_addresses:
            sprintFFS("Mapping \\\\" + ip + "\\" + share_folder + "\\")
        
        FFS_utils.map_drives(self.table.sync_addresses, share_folder)
    
    def update_sync_files_tooltip(self, names):
        DevicesString = ''
        for name in names:
            DevicesString += ('\n - ' + name)
        self.copy.setToolTip('Sync from local computer to devices:' + DevicesString)

    def on_browse_share_dir(self):
        new_dir = QtWidgets.QFileDialog.getExistingDirectory(self, "Select shared folder directory e.g. M\\\'share\'", (CONFIG.UPROJECT_PATH.get_value().rsplit('\\', 1))[0])

        if not new_dir:
            return

        ShareFolderDir = os.path.normpath(new_dir)
        if self.try_set_share_folder_dir(ShareFolderDir) == False:
            serrorFFS("Cannot set share folder")

    def try_set_share_folder_dir(self, shareDirCandidate):
        if os.path.isdir(shareDirCandidate) == False or self.ProjectDirectory.find(shareDirCandidate) == -1:
            return False
        if shareDirCandidate == os.path.dirname(shareDirCandidate):
            return False
        else:
            FromMappedDriveProjDir = self.ProjectDirectory[len(os.path.dirname(shareDirCandidate)):]
            if FromMappedDriveProjDir[0] == '\\':
                FromMappedDriveProjDir = FromMappedDriveProjDir[1:]
            self.from_mapped_drive_proj_dir = FromMappedDriveProjDir

            self.set_directories()
            self.table.from_mapped_drive_proj_dir = self.from_mapped_drive_proj_dir
            self.share_folder_dir = shareDirCandidate
            self.share_folder_text.setText(self.share_folder_dir)
            self.map_device.setToolTip('Map network drives from the devices IPs, \\\\IP\\' + self.share_folder_dir.rsplit('\\', 1)[1])
            return True
        
    def try_find_share_dir_from_FFS(self):
        rightSyncDir = FFS_utils.getRightSyncDir(self.ProjectDirectory)
        
        ## Example of expected behaviour below:
        ## self.ProjectDirectory = "D:\\Share\\Parent"
        ## rightSyncDir = "\\\\127.0.0.1\\Share\\Parent""
        if os.path.exists(self.ProjectDirectory) == False or rightSyncDir == '':
            return ''
        
        if rightSyncDir.find("\\\\") == -1:
            return ''
        if os.path.exists(rightSyncDir) == False:
            sprintFFS("Not found destination directory, verify if the listed devices' are seen as mapped network drives and if IP address is correct")
        # split = ['127.0.0.1', 'Share', 'Parent']
        split = (rightSyncDir.split('\\\\', 1)[1]).split('\\',2)
        if len(split) == 3:
            if self.ProjectDirectory.find(split[2]) != -1:
                # part = ['D:\\', 'Share', 'Parent']
                part = self.ProjectDirectory.partition(split[1])
                # return 'D:\\Share'
                return part[0]+part[1]
        elif len(split) == 2:
            path = split[1]
            index = self.ProjectDirectory.find(path)
            if index != -1:
                return self.ProjectDirectory
        return ''
    
    def update_project_dir(self):
        self.ProjectDirectory = (CONFIG.UPROJECT_PATH.get_value().rsplit('\\', 1))[0]

    def copy_FFS_files_if_not_in_local_dir(self):
        FFS_utils.copyFFSFilesIfNotInLocalDir(self.ProjectDirectory)

    def reset_config_bound_variables(self):
        self.share_folder_text.setText('')
        self.share_folder_dir = ''
        self.from_mapped_drive_proj_dir = ''

    def on_refresh_sync(self):
        sync_devices_dict = self.table.read_sync_devices_XML()
        self.table.clear_table()
        self.table.sync_addresses = []
        self.table.sync_names = []

        DevicesFromConfig = []
        try:
            with open(CONFIG.file_path, 'r') as file:
                data = json.load(file)
                unrealDevices = data['devices']['Unreal']
                nDisplayDevices = data['devices']['nDisplay']
                udLength = len(unrealDevices.values())
                ndLength = len(nDisplayDevices.values())
                for key, ud in unrealDevices.items():
                    if ud.get('address') != None:
                        DevicesFromConfig.append({'DeviceType': 'Unreal', 'Name': key, 'Address': ud.get('address')})
                for key, un in nDisplayDevices.items():
                    if un.get('address') != None:
                        DevicesFromConfig.append({'DeviceType': 'nDisplay', 'Name': key, 'Address': un.get('address')})
                
        except FileNotFoundError:
            print("File not found.")
        except json.JSONDecodeError:
            print("Error decoding JSON.")

        for device in DevicesFromConfig:
            if device is not None:
                if sync_devices_dict is not None and device['Name'] in sync_devices_dict:
                    sync_flag = sync_devices_dict[device['Name']]
                    self.table.add_item(device['DeviceType'], device['Name'], device['Address'], 'Role', sync_flag)
                    if sync_flag == 'Yes':
                        self.table.sync_addresses.append(device['Address'])
                        self.table.sync_names.append(device['Name'])
                else:
                    self.table.add_item(device['DeviceType'], device['Name'], device['Address'], 'Role', 'Yes')
                    self.table.sync_addresses.append(device['Address'])
                    self.table.sync_names.append(device['Name'])
                    self.table.save_sync_devices_XML()
        self.set_directories()