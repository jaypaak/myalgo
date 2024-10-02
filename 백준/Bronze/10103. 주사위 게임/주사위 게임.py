n = int(input())
a_score, b_score = 100, 100
for i in range(n):
    a, b = map(int, input().split())
    if a > b:
        b_score -= a
    elif a < b:
        a_score -= b
print(a_score)
print(b_score)