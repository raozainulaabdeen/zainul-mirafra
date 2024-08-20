
def pattern1(i):
    for i in range(i, 9+i):
        print(" "*(13-i), end = "")
        for j in range(i):
            print(" ", end = "")
            print("*", end = "")
        print()

pattern1(1)
pattern1(3)
pattern1(5)

