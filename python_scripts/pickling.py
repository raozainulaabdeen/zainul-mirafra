import pickle

obj = {"name": "zainul", "age": 27, "city": "saharanpur"}

with open("obj.pickle", "wb") as file:
    pickle.dump(obj, file)
