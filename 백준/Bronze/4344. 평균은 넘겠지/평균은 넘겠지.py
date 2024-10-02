C = int(input())
for i in range(C):
    N = list(map(int, input().split()))
    mean = sum(N[1:])/N[0]
    st_above_mean = 0
    if len(N[1:]) == N[0]:
        for s in range(len(N[1:])):
            if N[1:][s] > mean:
                st_above_mean += 1
        print(f'{round((st_above_mean/N[0])*100, 3)}%')
    else:
        break