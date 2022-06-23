testcases=int(input())
for i in range(testcases):
    x,y=map(int,input().split(' '))
    if(x%2==0):
        print('a'*(x//2)+'b'*(y)+'a'*(x//2))
        print('b'*(y//2)+'a'*(x//2)+'b'+'a'*(x//2)+'b'*(y//2))
    elif(x%2==0 and y%2==0):
        print('a'*(x//2)+'b'*(y)+'a'*(x//2))
        print('b'*(y//2)+'a'*(x)+'b'*(y//2))
    elif(y%2==0):
        print('b'*(y//2)+'a'*(x)+'b'*(y//2))
        print('a'*(x//2)+'b'*(y//2)+'a'+'b'*(y//2)+'a'*(x//2))
    else:
        print(-1)
