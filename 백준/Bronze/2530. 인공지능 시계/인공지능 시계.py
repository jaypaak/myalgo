A, B, C = map(int, input().split())
D = int(input())
if (A >= 0 and A < 24) and (B >= 0 and B < 60) and (C >= 0 and C < 60) and (D >= 0 and D < 500000):
    C += (D % 60)
    B += (D // 60)
    if C > 59:
        B += 1
        C %= 60
    if B > 59:
        A += (B // 60)
        B %= 60
    if A > 23:
        A %= 24
    print(A, B, C)