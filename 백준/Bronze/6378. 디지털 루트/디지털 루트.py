def int_spliter(number):
  sum = 0
  for i in number:
    sum += int(i)
  if len(str(sum)) == 1:
    return print(sum)
  else:
    int_spliter(str(sum))


while True:
  N = input()
  if N == '0':
    break
  int_spliter(N)
