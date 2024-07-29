import copy

l = [1, 2, 3, 4, 5]

c = copy.copy(l)

print(l, c, id(l), id(c))
