import pickle

with open("obj.pickle", "rb") as file:
    data = pickle.load(file)

print(data)
