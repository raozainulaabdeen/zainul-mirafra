l = [16, 19, 3, 2, 5, 2]

for i in range(len(l)-1):
    if l[i] < l[i+1]:
        l[i], l[i+1] = l[i+1], l[i]

print(l)
