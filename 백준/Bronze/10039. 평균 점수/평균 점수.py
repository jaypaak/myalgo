A = int(input())
B = int(input())
C = int(input())
D = int(input())
E = int(input())
arr = [A, B, C, D, E]
for i in range(len(arr)):
    if arr[i] < 40:
        arr[i] = 40
print(int(sum(arr)/5))