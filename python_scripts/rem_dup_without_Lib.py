def rm_dup(arr):
    uniq_arr = []
    length = 0

    for e in arr:
        if e not in uniq_arr:

            new_arr = [0]*(length+1)
            new_arr[length] = e
            j = 0
            while(j != length):
                new_arr[j] = uniq_arr[j]
                j += 1
            uniq_arr = new_arr
            length += 1

    return uniq_arr
    #arr = uniq_arr

arr = [2, 3, 4, 3, 4, 5, 6, 7, 6, 2, 2, 2, 8, 8, 9, 10, 10, 11, 11, 12, 13, 12, 13]

print(rm_dup(arr))
#print(arr)
