from sys import stdin as fast_enter

input = fast_enter.readline
K, L = map(int, input().split())

id_dict = {}

for i in range(L):
  id = input()
  if id in id_dict:
    del id_dict[id]
    id_dict[id] = True
  else:
    id_dict[id] = True
  if i == L - 1:
    limit = 0
    for id in id_dict:
      print(str(id).strip())
      limit += 1
      if limit == K:
        break
