import shutil
import sys

def unzip_all(dest_dir, zip_filename):
    shutil.unpack_archive(zip_filename, dest_dir, "zip")

args = sys.argv[1].split("|")

unzip_all(args[0], args[1])
