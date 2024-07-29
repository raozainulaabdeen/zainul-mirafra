def sqr(n):
    for i in range(1, n+1):
        yield i*i

a = sqr(5)

print(a,next(a), next(a), next(a), next(a), next(a))



