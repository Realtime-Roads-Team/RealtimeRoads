import os
import sys

FreeFileSync = 'C:/Program Files/FreeFileSync/FreeFileSync.exe'

if not os.path.isfile(FreeFileSync):
    sys.exit("FreeFileSync not found at {}".format(FreeFileSync))
