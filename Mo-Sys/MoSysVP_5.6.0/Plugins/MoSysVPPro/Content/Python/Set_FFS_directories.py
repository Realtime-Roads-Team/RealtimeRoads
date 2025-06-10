import xml.etree.ElementTree as ET
import os
import sys

def line_prepender(filename, line):
    with open(filename, 'r+') as f:
        currentContent = f.read()
        f.seek(0, 0)
        f.write(line.rstrip('\r\n') + '\n' + currentContent)

def indent(elem, level=0):
    i = "\n" + level*"    "
    if len(elem):
        if not elem.text or not elem.text.strip():
            elem.text = i + "    "
        if not elem.tail or not elem.tail.strip():
            elem.tail = i
        for elem in elem:
            indent(elem, level+1)
        if not elem.tail or not elem.tail.strip():
            elem.tail = i
    else:
        if level and (not elem.tail or not elem.tail.strip()):
            elem.tail = i

def modifyFolderPair(XMLFile, pairParams):
    with open(XMLFile, 'r') as fi:
        XMLheader = fi.readline()
        print(XMLheader)

        mytree = ET.parse(XMLFile)
        myroot = mytree.getroot()

        for folderPairs in myroot.iter('FolderPairs'):
            for pair in folderPairs.findall('Pair'):
                folderPairs.remove(pair)
            for idx in range(len(pairParams)-1):
                pair = ET.SubElement(folderPairs, 'Pair')
                left = ET.SubElement(pair, 'Left')
                left.text = pairParams[0]
                right = ET.SubElement(pair, 'Right')
                right.text = pairParams[idx+1]
                ET.dump(pair)

        indent(myroot) # format xml with idents

        mytree.write(XMLFile)
        line_prepender(XMLFile, XMLheader)

# arguments = 'F:\\Code\\MoSysVP_4_26\\unreal\\MoSysVP;F:\\Code\\MoSysVP_4_26\\unreal\\MoSysVP;F:\\Code\\MoSysVP_4_26\\unreal\\MoSysVP;F:\\Code\\MoSysVP_4_26\\unreal\\MoSysVP'
# params = arguments.split(';')

if len(sys.argv) > 1:
    print(len(sys.argv))
    params = sys.argv[1].split(';')
    print(str(params))


params = [param.replace("/", "\\" ) for param in params]
right_dir = params

fileDir = os.path.dirname(os.path.realpath(__file__))
os.chdir(fileDir)
os.chdir(r"FFS")
print(os.getcwd())

content = 'FFS_content.ffs_batch'
modifyFolderPair(content, params)
plugins = 'FFS_plugins.ffs_batch'
pluginParams = [s + "Plugins" for s in params]
modifyFolderPair(plugins, pluginParams)
config = 'FFS_config.ffs_batch'
configParams = [s + "Config" for s in params]
modifyFolderPair(config, configParams)
everything ='FFS_everything.ffs_batch'
modifyFolderPair(everything, params)