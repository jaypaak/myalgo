V = int(input())
R = input()
A = 0
B = 0
for i in range(len(R)):
    if R[i] == 'A':
        A += 1
    else:
        B += 1
if A > B:
    print('A')
elif A == B:
    print('Tie')
else:
    print('B')