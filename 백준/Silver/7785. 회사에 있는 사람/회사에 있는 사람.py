N = int(input())

check_note = {

}

for i in range(N):
  person, check = input().split()
  if check == "enter":
    check_note[person] = True
  else:
    del check_note[person]

for person in sorted(check_note, reverse=True):
  print(person)