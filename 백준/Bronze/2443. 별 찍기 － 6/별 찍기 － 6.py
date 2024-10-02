N = int(input())
for i in range(N):
    print(('*' * (N - i)).rjust(N) + ('*' * (N - i - 1)))