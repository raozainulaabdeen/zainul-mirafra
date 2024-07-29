import re

def outer(func):
    def inner(name):
        if(re.search("^ravi", name)):
            print("permission denied")
        else:
            func(name)
    return inner

@outer
def my_func(name):
    print(name)

#outer = outer(my_func)
#outer('zainul')

my_func('kavi a')
