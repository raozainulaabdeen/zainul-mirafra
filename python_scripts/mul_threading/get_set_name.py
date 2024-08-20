from threading import *

print("thread name is ",current_thread().getName())

current_thread().setName("Mirafra")

print("thread name is ",current_thread().getName())
print("thread name is ",current_thread().name)
