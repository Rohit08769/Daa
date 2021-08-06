def helper(l1, l, h):
    pivot = l1[l]
    i, j = l, h
    while i < j:
        while i <= j and l1[i] <= pivot:  i = i + 1
        while l1[j] > pivot: j = j - 1
        if i < j: l1[i], l1[j] = l1[j], l1[i]
    l1[j], l1[l] = l1[l], l1[j]
    return j


def quick_sort(l1, l, h):
    if l < h:
        part = helper(l1, l, h)
        quick_sort(l1, l, part - 1)
        quick_sort(l1, part + 1, h)


test_case = int(input())
for i in range(test_case):
    test_ele = int(input())
    l1 = list(map(int, input().split()))
    quick_sort(l1, 0, test_ele - 1)
    flag = False
    for j in range(len(l1) - 1):
        if l1[j] == l1[j + 1]:
            print("Yes")
            flag = True
            break
    if not flag:
        print("No")
