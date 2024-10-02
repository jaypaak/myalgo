T = int(input())

for i in range(T):
  N, M = map(int, input().split())
  A = list(map(int, input().split()))
  B = sorted(list(map(int, input().split())))
  cnt = 0
  for a in A:
    l, r = 0, M - 1
    result = 0
    while l <= r:
      mid = (l + r) // 2
      if a <= B[mid]:
        r = mid - 1
      else:
        l = mid + 1
        result = l
    cnt += result
  print(cnt)