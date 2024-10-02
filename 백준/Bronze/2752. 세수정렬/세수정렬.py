A, B, C = map(int, input().split())
arr = [A, B, C]
for i in range(3):
    print(sorted(arr)[i], end=' ')