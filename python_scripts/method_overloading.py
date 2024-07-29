class A:
    def __init__(self):
        print("I am constructor")

    def m1(self):
        print("I have no arguments")

    def m1(m1, a):
        print(f"I have one argument {a}")

    def m1(self, a, b):
        print(f"I have two arguments {a} and {b}")

obj = A()
#obj.m1()
obj.m1(10)
obj.m1(10, 20)

