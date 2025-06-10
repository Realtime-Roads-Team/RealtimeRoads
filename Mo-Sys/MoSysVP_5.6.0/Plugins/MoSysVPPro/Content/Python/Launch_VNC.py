import os
import sys
from subprocess import Popen

tightVNC = 'C:/Program Files/TightVNC/tvnviewer.exe'
ipAddress = ""
if len(sys.argv) > 1:
	ipAddress = sys.argv[1]

if os.path.isfile(tightVNC):
	Popen([tightVNC, ipAddress]) # + " " + ipAddress)
else:
    print ("Tight VNC not found at " + tightVNC)
