str1 = "technologieso"

dict1 = {}
for i in range(len(str1)):
    if str1[i] in dict1:
        dict1[str1[i]] += 1
    else:
        dict1[str1[i]] = 1


print(max(dict1, key=dict1.get))
