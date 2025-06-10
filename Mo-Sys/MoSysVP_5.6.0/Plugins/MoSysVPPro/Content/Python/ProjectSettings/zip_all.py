import shutil
import sys

def zip_all(source_dir, zip_filename):
    shutil.make_archive(zip_filename, "zip", source_dir)
    shutil.move(zip_filename + ".zip", zip_filename)

args = sys.argv[1].split("|")
zip_all(args[0], args[1])
