N = int(input())
arr = []
for i in range(N):
    n = int(input())
    arr.append(n)
arr_s = sorted(arr)
for s in range(N):
    print(arr_s[s])