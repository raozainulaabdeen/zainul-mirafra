import re

str1 = input("Enter a string: ") 

charRe = re.compile(r"[^a-zA-Z0-9]")

string = charRe.search(str1)

if not bool(string):
    print("Yes")

else:
    print("No")
