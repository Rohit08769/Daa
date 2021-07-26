def difference(l2, key, cnt):
    hashset = set()
    for i in range(len(l2)):
        if l2[i] + key in hashset:
            cnt += 1
        if l2[i] - key in hashset:
            cnt += 1
        hashset.add(l2[i])
    return cnt


n = int(input())
l1 = []
for i in range(n):
    cnt = 0
    test_case = int(input())
    l2 = list(map(int, input().split()))
    key = int(input())
    l1.append(difference(l2, key, cnt))
for i in range(0, len(l1)):
    if l1[i] != 0:
        print(l1[i])
    else:
        print("Not pair found")
