import re
str1 = input("Enter a string: ")

m = re.fullmatch("[a-k][0369][a-zA-Z0-9#]*", str1)

if m!= None:
    print("Valid")
else:
    print("Invalid")
