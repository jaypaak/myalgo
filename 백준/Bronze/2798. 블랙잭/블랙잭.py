N, M = map(int, input().split())
cards = list(map(int, input().split()))
length = len(cards)

if N == length:
  max = 0
  for i in range(0, length - 2):
    for j in range(i + 1, length - 1):
      for k in range(j + 1, length):
        sum = cards[i] + cards[j] + cards[k]
        if sum <= M and sum >= max:
          max = sum
  print(max)