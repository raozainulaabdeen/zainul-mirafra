import re

s = input("Enter a mobile number: ")

if re.fullmatch("[7-9][0-9]{9}", s) != None: #or [7-9]\d{9}
    print("Valid mobile number")

else:
    print("Invalid mobile number")


