T = int(input())
for t in range(T):
    N = list(map(str, input().split()))
    if '.' in N[0]:
        N_first = float(N[0])
    else:
        N_first = int(N[0])
    for n in range(1, len(N)):
        if N[n] == '@':
            N_first *= 3
        elif N[n] == '%':
            N_first += 5
        elif N[n] == '#':
            N_first -= 7
    print("{:.2f}".format(N_first))