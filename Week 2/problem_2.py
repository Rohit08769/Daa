def add(l2):
    res = []
    dup = set()
    for i, outer in enumerate(l2):
        if outer not in dup:
            dup.add(outer)
            hashset = set()
            for j, inner in enumerate(l2):
                if i != j:
                    temp = l2[i] - l2[j]
                    if temp in hashset:
                        res.extend([str(l2.index(temp) + 1), str(j + 1), str(i + 1)])
                    hashset.add(inner)
    return res


test_case = int(input())
l1 = []
for i in range(test_case):
    test_element = int(input())
    l2 = list(map(int, input().split()))
    l1.append(add(l2))
for i in l1:
    if i:
        print(",".join(i))
    else:
        print("No sequence found")
