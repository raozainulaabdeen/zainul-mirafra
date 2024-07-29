class parent:
    def display(self):
        print("this is parent function")

class child(parent):
    def show(self):
        print("this is child function")


c = child()
c.display()
c.show()
