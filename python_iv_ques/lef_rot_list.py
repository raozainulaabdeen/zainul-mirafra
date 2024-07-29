l = eval(input("Enter a list you want to left rotate: "))

count = int(input("how many times you want to rotate: "))

while count != 0:
    element = l.pop(0)
    l.append(element)
    count -= 1

print(l)
