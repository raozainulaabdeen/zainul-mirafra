m = [[1, 2, 3, 4 ],
     [4, 5, 6, 7 ],
     [7, 8, 9, 10],
     [1, 2, 3, 11]]

def sum_diag_matrix(m):
    len_matrix = len(m)
    sum_diag = 0
    i = 0

    for e in m:
        sum_diag += e[i]
        i += 1

    i = -1
    for e in m:
        sum_diag += e[i]
        i -= 1
    if len_matrix % 2 != 0:
        sum_diag -= m[len_matrix // 2][len_matrix // 2]
    return sum_diag

print(sum_diag_matrix(m))
