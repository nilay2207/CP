import math


testcase=int(input())

for i in range(testcase):
    n,x=map(int,input().split(" "))
    k=input()
    ss=list(map(int,k.split(" ")))
    ans=max(n,math.ceil(x/min(ss)))
    print(ans)

