N = int(input())
count = 0
for i in range(0, N):
  word = input()
  alphabet = list(set(word))
  for j in range(0, len(word)):
    if j == 0:
      continue
    if word[j] != word[j - 1]:
      if word[j] in alphabet:
        alphabet.remove(word[j - 1])
      else:
        count += 1
        break
print(N - count)
