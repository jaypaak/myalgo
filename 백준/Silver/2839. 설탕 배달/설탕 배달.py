N = int(input())

pack = 0

while N >= 0:
  if N % 5 == 0:
    pack += (N // 5)
    print(pack)
    break
  N -= 3
  pack += 1
else:
  print(-1)