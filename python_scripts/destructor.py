import time

class Test:
    def __init__(self):
        print("creating a object {}".format(self))

    def __del__(self):
        print("destroying the object {}".format(self))


t1 = Test()
t2 = t1
t3 = t2

del t1
print("t1 is deleted")
time.sleep(5)

del t2
print("t2 is deleted")
time.sleep(5)

del t3
print("t3 is deleted")
time.sleep(5)

print("End of Application")

