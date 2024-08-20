from threading import *

class MyThread(Thread):
    def run(self):
        for i in range(1, 11):
            print("Child thread!")


t = MyThread()
t.start()

for i in range(1, 11):
    print("Main thread")
