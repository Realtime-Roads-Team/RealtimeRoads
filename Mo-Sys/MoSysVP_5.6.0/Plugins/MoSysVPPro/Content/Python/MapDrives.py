# Importing required module
import subprocess
import sys
 
if len(sys.argv) > 1:
    params = sys.argv[1].split(';')

for param in params:
    print(param)
    subprocess.Popen('net use * \\\\'+param+'\\Shared', shell=True)