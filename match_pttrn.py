import re

m = re.match("abc", "abaaabaab")

if m != None:
    print("pattern is found at the beginning of the string")
    print("start index is ", m.start(), "end index is ", m.end())

else:
    print("pattern not found")

