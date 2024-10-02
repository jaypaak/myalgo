S = int(input())
arr = []
i = 0
while sum(arr) + i < S:
    i += 1
    arr.append(i)
print(len(arr))