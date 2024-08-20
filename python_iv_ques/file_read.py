with open("f1.txt", "r") as fp:
    ver_found = False
    for line in fp:
        line = line.split()
        for word in line:
            if word == "12:40":
                ver_found = True
                print(line)
                break
        if ver_found == True:
            break
