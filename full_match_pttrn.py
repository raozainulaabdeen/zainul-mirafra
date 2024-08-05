import re

m = re.fullmatch("ababab", "ababab")

if m != None:
    print("full match")

else:
    print("Not full match")

