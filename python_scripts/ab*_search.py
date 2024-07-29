import re

def find_pattern(txt):
    pattern = '^a(b*)$'
    if re.search(pattern, txt):
        print("pattern is found")
    else:
        print("pattern is not found")


find_pattern("abbbbbbbbbbbbbbbb")
find_pattern("aaaaaabbbbbbbb")
find_pattern("abb")




