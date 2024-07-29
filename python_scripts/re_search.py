import re

a = "this is mirafra tech"

if re.search("^this.*tech$", a):
    print("YES")
else:
    print("NO")
