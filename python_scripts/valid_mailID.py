import re
pattern = "\w[a-zA-Z0-9_.]*@gmail[.]com"
email_id = input("Enter a Email ID: ")

if re.fullmatch(pattern, email_id) != None:
    print("Valid mail id")
else:
    print("Invalid mail id")

