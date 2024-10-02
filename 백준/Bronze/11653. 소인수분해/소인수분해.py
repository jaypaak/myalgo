N = int(input())
n = 1
while N - n != 0:
    n += 1
    if N % n == 0:
        print(n)
        N = N/n
        n = 1