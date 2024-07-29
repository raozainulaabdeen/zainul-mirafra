import os

if os.path.exists("file1.txt"):
    os.remove("file1.txt")
else:
    print("file does not exist!")
