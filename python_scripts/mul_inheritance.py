class A:
    def f1(self):
        print("this is A class")

class B:
    def f2(self):
        print("this is B class")

class C(A, B):
    def f3(self):
        print("this is C class")


m = C()

m.f1()
m.f2()
m.f3()
