import numpy as np
def mat_add(m1, m2):
    rows = len(m1)
    cols = len(m1[0])

    #m3 = [[0 for _ in range(cols)] for _ in range(rows)]
    m3 = np.zeros((rows, cols))

    m3 = m1 + m2

    """for i in range(rows):
        for j in range(cols):
            m3[i][j] = m1[i][j] + m2[i][j]"""

    return m3

m1 = np.array([[1, 2], [2, 3], [3, 4]])
m2 = np.array([[4, 5], [5, 6], [6, 7]])
print(f"{m1}+{m2}={mat_add(m1, m2)}")
