def fib(limit):
    a, b = 0, 1
    while(a < limit):
        yield a
        a, b = b, a+b

x = fib(100)

print(x)
#print(next(x))
#print(x.__next__())
#print(x.__next__())
#print(x.__next__())
#print(x.__next__())

print("using for loop")

for i in fib(100):
    print(i)
