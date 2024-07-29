def find_leaders(arr, size):

    leader = []

    leader.append(arr[size -1])

    curr_max = arr[size -1]

    for i in range((size -2), -1, -1):
        if arr[i] > curr_max:
            leader.append(arr[i])
            curr_max = arr[i]

    return leader


l = [16, 17, 4, 5, 2, 3, 1]

print("leaders are: ", find_leaders(l, len(l))[::-1])
