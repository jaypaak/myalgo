N = input()
arr = []
if len(N) == 1:
    N = '0' + N[0]
arr.append(N[1] + str(int(N[0]) + int(N[1]))[-1])
while arr[-1] != N:
    arr.append(arr[-1][1] + str(int(arr[-1][0]) + int(arr[-1][1]))[-1])
print(len(arr))