x = 10
y = 1

try:
    x/y
except ZeroDivisionError:
    print("except")

else:
    print("no exception")

finally:
    print("I always execute")

