import sys
input = sys.stdin.readline
N = int(input())
A = sorted(list(map(int, input().split())))
M = int(input())
B = list(list(map(int, input().split())))

result = ''

def search(l, r, b):
  global result
  mid = (l + r) // 2
  mid_value = A[mid]
  if l > r: # l이 r을 넘어갔다는 것은 l과 r사이에서 해당값을 찾지 못한 것과 같으므로 0
    result += '0' + '\n'
  else:
    if b < mid_value: # b가 A의 중앙값 미만일 경우 중앙값 ~ 오른쪽 배열엔 답이 없다는 것 => r을 mid - 1로 당겨준다
      r = mid - 1
      search(l, r, b)
    elif b > mid_value: # b가 A의 중앙값 초과일 경우 왼쪽 배열 ~ 중앙값엔 답이 없다는 것 => l을 mid + 1로 당겨준다
      l = mid + 1
      search(l, r, b)
    else: # b == A[mid]
      result += '1' + '\n'
    
for b in B:
  search(0, N - 1, b)
  
print(result)