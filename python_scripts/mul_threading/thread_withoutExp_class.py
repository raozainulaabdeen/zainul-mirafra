from threading import *

class Test():
    def run(self):
        for i in range(1, 11):
            print("Child thread!")

obj = Test()

t = Thread(target=obj.run)
t.start()

for i in range(1, 11):
    print("Main thread!")
