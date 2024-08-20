import os

file_name = "f1.txt"

for d_paths, d_names, file_names in os.walk("/home/zainul/git_dir"):
    if file_name in file_names:
        print(d_paths)
        
