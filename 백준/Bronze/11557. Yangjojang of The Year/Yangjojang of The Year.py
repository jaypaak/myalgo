T = int(input())
for i in range(T):
    N = int(input())
    arr_s = []
    arr_d = []
    for s in range(N):
        S, D = map(str, input().split())
        arr_s.append(S)
        arr_d.append(int(D))
        max_d = max(arr_d)
        index = arr_d.index(max_d)
    print(arr_s[index])