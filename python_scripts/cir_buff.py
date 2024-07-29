class cir_buff:
    def __init__(self, size):
        self.size = size
        self.buffer = [0]*size
        self.rd = 1
        self.wr = 1

    def is_empty(self):
        return self.rd == self.wr

    def is_full(self):
        return (self.wr + 1) == self.rd

    def push_to_cb(self, data):
        if self.is_full():
            print("buffer is full!")

        else:
            self.buffer[self.wr] = data
            self.wr = (self.wr + 1)%self.size

    def pop_from_cb(self):
        if self.is_empty():
            print("buffer is empty!")

        else:
            pop_val = self.buffer[self.rd]
            self.rd = (self.rd + 1)%self.size
            return pop_val

    def peek_cb(self):
        if self.is_empty():
            print("buffer is empty!")

        else:
            return self.buffer[self.rd]


cb = cir_buff(6)

while True:
    choice = int(input("Enter your choice 1 for push, 2 for pop and 3 for peek: "))

    if choice == 1:
        cb.push_to_cb(input("enter the value to be pushed: "))
    elif choice == 2:
        print("poped value is ", cb.pop_from_cb())
    elif choice == 3:
        print("peek value is ", cb.peek_cb())
    else:
        print("you entered the wrong choice!")


