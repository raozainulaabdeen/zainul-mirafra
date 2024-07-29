def rev_list(l, i):
    if (i != (len(l)-1)):
        rev_list(l, i+1)
    print(l[i])

l = [1, 2, 3, 4, 5]

rev_list(l, 0)
