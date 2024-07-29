class c:
    def __init__(self):
        self.name = "ravi"
        self.age = 27
    def m1(self):
        self.a = 100
        print("I am method1")
        print(self.name, self.age)

c1 = c()
c1.m1()
c1.o = 30
del c1.a
print(c1.name, c1.age, c1.o)
print(c1.__dict__)
