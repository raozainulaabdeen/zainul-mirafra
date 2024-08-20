import re

str1 = input("Enter a string: ")

charRe = re.compile(r"^a(b*)$")  #starts with a and ends with zero or more b's

string = charRe.search(str1)

if bool(string):
    print("Yes Matched with the pattern")

else:
    print("Not Matched")
