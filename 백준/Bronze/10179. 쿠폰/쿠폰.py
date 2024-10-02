N = int(input())

saled = ''
for i in range(N):
  origin = float(input())
  saled += "$" + str(format((origin - origin * 0.2), ".2f")) + '\n'
print(saled)
