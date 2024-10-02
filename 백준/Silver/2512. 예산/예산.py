import sys
input = sys.stdin.readline

N = int(input())
N_val = list(map(int, input().split()))
M = int(input())

l, r = 0, max(N_val)
mid = 0
while l <= r:
  mid = (l + r) // 2
  sum_of_val = 0
  for val in N_val:
    if val <= mid:
      sum_of_val += val
    else:
      sum_of_val += mid
  if sum_of_val <= M:
    l = mid + 1
  else:
    r = mid - 1
print(r)