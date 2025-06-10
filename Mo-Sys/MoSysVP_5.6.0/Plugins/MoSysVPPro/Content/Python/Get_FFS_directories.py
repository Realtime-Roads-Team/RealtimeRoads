import xml.etree.ElementTree as ET
import os
import sys

if len(sys.argv) > 1:
    print(len(sys.argv))
    params = sys.argv[1].split(';')
    print(str(params))


fileDir = os.path.dirname(os.path.realpath(__file__))
os.chdir(fileDir)
os.chdir(r"FFS")
print(os.getcwd())

with open('FFS_content.ffs_batch', 'r') as fi:
        mytree = ET.parse('FFS_content.ffs_batch')
        myroot = mytree.getroot()
        for pair in myroot.iter('Pair'):
            left = pair.find('Left')
            print(left.text)
            right = pair.find('Right')
            print(right.text)