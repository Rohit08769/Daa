def selection_sort(l1):
    swaps, comparison = 0, 0
    for i in range(0, len(l1) - 1):
        temp = i
        for j in range(i + 1, len(l1)):
            comparison += 1
            if l1[j] < l1[temp]:
                temp = j

        l1[i], l1[temp] = l1[temp], l1[i]
        swaps += 1
    print(f"{' '.join(list(map(str, l1)))} \ncomparison = {comparison} \nswaps = {swaps}")


test_case = int(input())
for i in range(test_case):
    test_ele = int(input())
    l1 = list(map(int, input().split()))
    selection_sort(l1)
