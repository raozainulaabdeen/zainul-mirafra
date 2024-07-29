l1 = [1, 2, 3, 4, 5, 6, 7]
n = 4

for i in range(1, n+1):
    element = l1.pop(0)
    l1.append(element)

print(l1)
