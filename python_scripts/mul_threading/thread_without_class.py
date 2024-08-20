from threading import *

def display():
    for i in range(1, 11):
        print("Child thread!")

t = Thread(target=display)
t.start()

for i in range(1, 11):
    print("Main thread")
