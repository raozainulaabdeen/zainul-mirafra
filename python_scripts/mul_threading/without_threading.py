import time

def double(numbers):
    for i in numbers:
        print("double of ", i, " is ", 2*i)
        time.sleep(1)

def square(numbers):
    for i in numbers:
        print("sqr of ", i, " is ", i*i)
        time.sleep(1)

numbers = [1, 2, 3, 4, 5, 6, 7, 9, 10]
begin = time.time()
double(numbers)
square(numbers)


print("time taken is ", time.time() - begin)
