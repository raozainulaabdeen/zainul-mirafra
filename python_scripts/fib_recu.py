def fibonacii(n):
    if n == 1:
        print(0)
        return 0
    elif n == 2:
        print(1)
        return 1
    else:
        temp = fibonacii(n-1) + fibonacii(n-2)
        print(temp)
        return temp

fibonacii(10)
