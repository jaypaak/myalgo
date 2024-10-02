N = int(input())
price = []
for i in range(N):
    D = list(map(int, input().split()))
    D_set = list(set(sorted(D)))
    if len(D_set) == 3:
        price.append(D_set[2]*100)
    elif len(D_set) == 2:
        D.remove(D_set[0])
        D.remove(D_set[1])
        price.append(1000 + (D[0] * 100))
    else:
        price.append(10000 + (D_set[0] * 1000))
print(max(price))
