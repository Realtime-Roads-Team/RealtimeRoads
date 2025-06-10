import xml.etree.ElementTree as ET
import os
import sys
import subprocess
import shutil
import threading
from .mosys_utils import sprintFFS, serrorFFS

class FFS_utils():

    # All modes of sync should be listed here
    SyncFileDict = {
    "Content": 'FFS_content.ffs_batch',
    "Plugins": 'FFS_plugins.ffs_batch',
    "Config": 'FFS_config.ffs_batch',
    "Everything": 'FFS_everything.ffs_batch',
    "MoSysConfig": 'FFS_MoSysConfig.ffs_batch',
    "MoSysLicense": 'FFS_MoSysLicense.ffs_batch'
    }

    @classmethod
    def indent(cls, elem, level=0):
        i = "\n" + level*"    "
        if len(elem):
            if not elem.text or not elem.text.strip():
                elem.text = i + "    "
            if not elem.tail or not elem.tail.strip():
                elem.tail = i
            for elem in elem:
                cls.indent(elem, level+1)
            if not elem.tail or not elem.tail.strip():
                elem.tail = i
        else:
            if level and (not elem.tail or not elem.tail.strip()):
                elem.tail = i
    @classmethod
    def modifyFolderPair(cls, XMLFile, sourceDirectory, destinationDirectories):
        # Check if file exists
        if not os.path.isfile(XMLFile):
            sprintFFS(f"File not found: {XMLFile}")
            return False

        # Check if file is readable and writable
        if not os.access(XMLFile, os.R_OK | os.W_OK):
            sprintFFS(f"File not accessible: {XMLFile}")
            return False
    
        with open(XMLFile, 'r+') as fi:
            mytree = ET.parse(XMLFile)
            myroot = mytree.getroot()

            for folderPairs in myroot.iter('FolderPairs'):
                for pair in folderPairs.findall('Pair'):
                    folderPairs.remove(pair)
                for idx in range(len(destinationDirectories)):
                    pair = ET.SubElement(folderPairs, 'Pair')
                    left = ET.SubElement(pair, 'Left')
                    left.text = sourceDirectory
                    right = ET.SubElement(pair, 'Right')
                    right.text = destinationDirectories[idx]

            cls.indent(myroot) # format xml with idents
            mytree.write(XMLFile, encoding='utf-8', xml_declaration=True)
    
    @classmethod
    def createGUIFile(cls, XMLFileInput, XMLFileOutput):
        # Check if file exists
        if not os.path.isfile(XMLFileInput):
            sprintFFS(f"File not found: {XMLFileInput}")
            return False

        # Check if file is readable
        if not os.access(XMLFileInput, os.R_OK):
            sprintFFS(f"File not accessible: {XMLFileInput}")
            return False
        
        # Check if output file exists and is writable
        if os.path.isfile(XMLFileOutput):
            if not os.access(XMLFileOutput, os.W_OK):
                sprintFFS(f"Output file is not writable: {XMLFileOutput}")
                return False
        
        with open(XMLFileInput, 'r') as input:
            tree = ET.parse(XMLFileInput)
            root = tree.getroot()

            root.set('XmlType', 'GUI')

            Batch_tag = root.find('.//Batch')
            root.remove(Batch_tag)
            
            Gui_tag = ET.Element('Gui')
            GridViewType_tag = ET.SubElement(Gui_tag, 'GridViewType')
            GridViewType_tag.text = 'Action'

            Email_tag = root.find('.//EmailNotification')
            root.insert(list(root).index(Email_tag) + 1, Gui_tag)

            cls.indent(root) # format xml with idents
            tree.write(XMLFileOutput, encoding='utf-8', xml_declaration=True)
    
    @classmethod
    def setDirectories(cls, projectDir, destinationDirectories, FromMappedDriveProjDir):
        destDirs = destinationDirectories
        destDirs = [param.replace("/", "\\" ) for param in destDirs]
        destDirs = ['\\\\' + e +'\\' + FromMappedDriveProjDir for e in destDirs]
        
        fileDir = os.path.join(projectDir, 'Saved\SaveGames\FFS')
        if not os.path.exists(fileDir):
            return False
        os.chdir(fileDir)

        for key, value in cls.SyncFileDict.items():
            dir = projectDir
            Dests = []
            if key == "Plugins" or key == "Config":
                dir = projectDir + "\\" + key
                for destDir in destDirs:
                    Dests.append(destDir + "\\" + key)
            else:
                Dests = destDirs
            cls.modifyFolderPair(value, dir, Dests)
            cls.createGUIFile(value, value.rsplit('.',1)[0] + '.ffs_gui')
        return True

    @staticmethod
    def copy(file_to_exec, projectDir):
        FreeFileSync = 'C:/Program Files/FreeFileSync/FreeFileSync.exe'

        if not os.path.isfile(FreeFileSync):
            serrorFFS('Free File Sync not installed in C:/Program Files/FreeFileSync/')
            return False

        fileDir = os.path.join(projectDir, 'Saved\SaveGames\FFS')
        if not os.path.exists(fileDir):
            return False
        
        os.chdir(fileDir)

        def ExecCopy():
            result = subprocess.run(file_to_exec, shell=True, capture_output=True, text=True)
            if result.returncode == 0:
                sprintFFS("Successfully synced")
            if result.returncode == 1:
                sprintFFS("Synchronization completed")
            if result.returncode == 2:
                sprintFFS("Synchronization completed with errors")
            if result.returncode == 3:
                sprintFFS("Synchronization was aborted")
            else:
                serrorFFS("Couldn't sync: error code" + result.returncode)

        thread = threading.Thread(target=ExecCopy)
        thread.start()
        return True
    
    @staticmethod
    def map_drives(destinationDirectories, Share_folder):      
        for dir in destinationDirectories:
            subprocess.run('net use * \\\\'+dir+'\\'+ Share_folder, shell=True, capture_output=True, text=True)

    @classmethod
    def getRightSyncDir(cls, projectDir):
        fileDir = os.path.join(projectDir, 'Saved\SaveGames\FFS')
        if not os.path.exists(fileDir):
            serrorFFS('Sync profile not set')
            return ''
        os.chdir(fileDir)

        XMLFile = cls.SyncFileDict["Content"]
        with open(XMLFile, 'r') as fi:
            mytree = ET.parse(XMLFile)
            myroot = mytree.getroot()

            for right in myroot.iter('Right'):
                if right.text is not None and right.text.strip() != '':
                    return right.text
                else:
                    return ''
        return ''
    
    @classmethod
    def copyFFSFilesIfNotInLocalDir(cls, projectDir):
        file_dest_path = os.path.join(projectDir, 'Saved\SaveGames\FFS\FFS_content.ffs_batch')

        shouldCopySyncFiles = False
        if os.path.exists(file_dest_path):
            file_list = os.listdir(os.path.dirname(file_dest_path))
            batchFileCounter = 0
            for file_name in file_list:
                if file_name.endswith('.ffs_batch'):
                    batchFileCounter += 1
            if(batchFileCounter != len(cls.SyncFileDict)):
                shouldCopySyncFiles = True
        else:
            shouldCopySyncFiles = True
        
        if shouldCopySyncFiles == False:
            return False
        else:
            dest_dir = os.path.dirname(file_dest_path)
            source_dir = os.path.join(os.path.dirname(os.path.realpath(__file__)), 'FFS')
            if not os.path.exists(dest_dir):
                os.makedirs((dest_dir))

            file_list = os.listdir(source_dir)
            for file_name in file_list:
                if file_name.endswith('.ffs_batch'):
                    source_file = os.path.join(source_dir, file_name)
                    destination_file = os.path.join(dest_dir, file_name)
                    shutil.copy(source_file, destination_file)
                    cls.createGUIFile(source_file, destination_file.rsplit('.',1)[0] + '.ffs_gui')
            return True