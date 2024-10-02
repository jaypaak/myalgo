from sys import stdin
while True:
    try:
        A, B = map(int, stdin.readline().split())
        print(A + B)
    except:
        break