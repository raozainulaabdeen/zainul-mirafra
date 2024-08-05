import json

with open("f1.json", "r") as file:
    data = json.load(file)

print(data)
