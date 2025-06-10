import os
import sys

tightVNC = 'C:/Program Files/TightVNC/tvnviewer.exe'

if not os.path.isfile(tightVNC):
    sys.exit("TightVNC not found at {}".format(tightVNC))
