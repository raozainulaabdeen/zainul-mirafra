def rm_dup(l1):
    uniq_list = []
    length = 0

    for e in l1:
        if e in uniq_list:
            continue
        else:
            length += 1
            new_list = [0]*length
            new_list[length-1] = e

            for i in range(length-1):
                new_list[i] = uniq_list[i]
        uniq_list = new_list
    return uniq_list


l1 = eval(input("enter a list: "))
print("id is ", id(l1))
print("unique element list is ", id(rm_dup(l1)))
