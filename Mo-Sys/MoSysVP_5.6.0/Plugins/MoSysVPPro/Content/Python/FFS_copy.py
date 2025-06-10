import xml.etree.ElementTree as ET
import os
import sys
import subprocess

fileDir = os.path.dirname(os.path.realpath(__file__))

os.chdir(fileDir)
os.chdir(r"FFS")
print(os.getcwd())

if len(sys.argv) > 1:
    params = sys.argv[1]
    print('params: ' + params)
    subprocess.Popen("call \""+params+"\"", shell=True)