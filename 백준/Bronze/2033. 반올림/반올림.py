N = list(input())


def rounder(integer_n):
  if integer_n > 4:
    return True
  else:
    return False


rounded_N = N
for i in reversed(range(1, len(N))):
  if rounder(int(N[i])):
    rounded_N[i] = '0'
    rounded_N[i - 1] = str(int(rounded_N[i - 1]) + 1)
  else:
    rounded_N[i] = '0'

print(''.join(rounded_N))