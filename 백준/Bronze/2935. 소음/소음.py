A = input()
T = input()
B = input()
A_pow = len(A[1:])
B_pow = len(B[1:])
# if A_pow + B_pow < 100:
if T == '*':
    print(10**(A_pow + B_pow))
else:
    print(int(A) + int(B))