A = int(input())
B = int(input())
C = int(input())
D = int(input())
E = int(input())
F = int(input())
G = int(input())
arr = [A, B, C, D, E, F, G]
arr2 = []
for i in range(7):
    if arr[i] % 2 != 0:
        arr2.append(arr[i])
if len(arr2) == 0:
    print(-1)
else:
    print(sum(arr2))
    print(min(arr2))
