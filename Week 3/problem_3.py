def insertion_sort(l1):
    global j
    shift, comparision = 0,0
    for i in range(1, len(l1)):
        temp = l1[i]
        j=i-1
        while l1[j]>temp and j>=0:
            l1[j + 1] = l1[j]
            shift += 1
            comparision+=1
            j-=1

        l1[j + 1] = temp
        comparision+=1

    print(f"{' '.join(list(map(str,l1)))} \ncomparision = {shift} \nshifts = {comparision}")


test_case = int(input())
for i in range(test_case):
    test_ele = int(input())
    l1 = list(map(int, input().split()))
    insertion_sort(l1)
