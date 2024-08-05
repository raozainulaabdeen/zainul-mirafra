import re

f1 = open("input.txt", "r")
f2 = open("output.txt", "w")

for line in f1:
    list1 = re.findall("[7-9]\d{9}", line)
    for n in list1:
            f2.write(n+"\n")

print("Data Extracted")
f1.close()
f2.close()


