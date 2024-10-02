N = int(input())
for i in range(N):
    Q = list(map(str, input()))
    score = 0
    arr = []
    for q in range(len(Q)):
        if Q[q] == 'O' or Q[q] == 'X':
            if Q[q] == 'X':
                score = 0
            else:
                score += 1
                arr.append(score)
        else:
            break
    print(sum(arr))