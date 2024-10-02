N = int(input())
for i in reversed(range(N)):
    print(('*' * (i + 1)).rjust(N))