class person:
    def __init__(self, name):
        self.name = name

    def say_hi(self):
        print("my name is ", self.name)


p = person('Nitin')
p.say_hi()
