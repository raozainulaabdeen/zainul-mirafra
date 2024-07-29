"""f = open("file.txt", "r")

#f.write("my name is mirafra technologies!")

content = f.read()

print(content)

f.close()"""

with open("file.txt", "r") as f:
    content = f.read()
    print(content)
