def reverseList(lst):
    if not lst:
        return []
    return [lst[-1]] + reverseList(lst[:-1])
print(reverseList([1, 2, 3, 4, 5]))
