import sys

l = [1, 2]

t = (1, 2)

print("list: ", sys.getsizeof(l))
print("tuple: ", sys.getsizeof(t))
print("list: ", l.__sizeof__)
print("tuple: ", t.__sizeof__)
