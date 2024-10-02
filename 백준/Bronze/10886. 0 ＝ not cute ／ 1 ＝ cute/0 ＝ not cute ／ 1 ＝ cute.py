N = int(input())
survey = []
for i in range(N):
    vote = int(input())
    survey.append(vote)
if survey.count(0) > survey.count(1):
    print('Junhee is not cute!')
else:
    print('Junhee is cute!')