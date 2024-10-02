import sys
a = list(map(int,sys.stdin.readline().split()))
def solve(a):
    ans=0
    for i in range(len(a)):
        ans+=a[i]
    return ans
