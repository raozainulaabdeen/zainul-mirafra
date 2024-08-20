from threading import *


def display():
    for i in range(1, 11):
        print("child thread")

t = Thread(target = display)

t.start()

for i in range(1, 11):
    print("main thread")
