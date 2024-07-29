import copy

a = [1, 2, 3, 4, 5]
b = copy.copy(a, False)   

c = 101
d = c

print(a, b, id(a), id(b))
print(c, d, id(c), id(d))

b[0] = 100
c = c & ~(1 << 0)

print(a, b, id(a), id(b))
print(c, d, id(c), id(d))
