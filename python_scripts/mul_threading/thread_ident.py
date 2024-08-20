from threading import *

def display():
    for i in range(1, 5):
        print(i)

t = Thread(target=display)
t.start()

print("id of the thread is ", t.ident)
print("id of current thread is ", current_thread().ident)
print("number of active threads are ", active_count())
print(enumerate())
print(t.is_alive())
