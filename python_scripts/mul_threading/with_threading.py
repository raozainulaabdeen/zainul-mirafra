from threading import *
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

t1 = Thread(target=double, args = (numbers,))
t2 = Thread(target=square, args = (numbers,))

t1.start()
t2.start()
t1.join()
t2.join()

print("time taken is ", time.time() - begin)
