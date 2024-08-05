import re, urllib

import urllib.request

u = urllib.request.urlopen("https://www.redbus.in/info/contactus")

txt = u.read()

numbers = re.findall("[0-9-]{7}[0-9-]+", str(txt), re.I)

for n in numbers:
    print(n)
