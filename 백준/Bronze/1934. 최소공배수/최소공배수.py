T = int(input())
for i in range(T):
    A, B = map(int, input().split())
    A_origin = A
    B_origin = B
    a = 1
    b = 1
    arr_a = []
    arr_b = []
    arr_ab = []
    while A - a != 0:
        a += 1
        if A % a == 0:
            arr_a.append(a)
    while B - b != 0:
        b += 1
        if B % b == 0:
            arr_b.append(b)
    for s in range(len(arr_a)):
        if arr_a[s] in arr_b:
            arr_ab.append(arr_a[s])
    if len(arr_ab) == 0:
        print(A_origin * B_origin)
    else:
        print(int((A_origin*B_origin)/arr_ab[-1]))