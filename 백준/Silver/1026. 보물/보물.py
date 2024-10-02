N = int(input())
A = sorted(list(map(int, input().split())))[::-1]
B = sorted(list(map(int, input().split())))

S = 0
for i in range(N):
  S += A[i] * B[i]

print(S)