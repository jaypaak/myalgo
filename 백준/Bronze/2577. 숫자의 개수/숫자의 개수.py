A = int(input())
B = int(input())
C = int(input())
Time = str(A * B * C)
for i in range(10):
    print(Time.count(f'{i}'))