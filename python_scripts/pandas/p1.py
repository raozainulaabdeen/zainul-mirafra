import pandas as pd

d = {"Name": ["one", "two", "three", "four", "five"], "length": [3, 3, 5, 4, 4]}

df = pd.DataFrame(d)

print(df["Name"][0])
