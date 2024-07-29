class c:
    name = "charC"

    def __init__(self, a, b):
        self.a = a
        self.b = b

    def display(self):
        print("a is ",self.a, "b is ", self.b)
        #print("name is ", self.name)


c1 = c(100, 200)

c.name = "charc1"

print("name is ", c.name)

c1.display()
