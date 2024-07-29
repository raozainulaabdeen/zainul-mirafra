str1 = input("Enter a string: ")

i = 0

for ch in str1:
    print(f"Character: {ch}, Positive index is {i} and Negative index is {-len(str1)+i}")
    i += 1
