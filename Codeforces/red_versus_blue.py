for i in range(int(input())):
    n,r,b=list(map(int,input().split(" ")))
    count1=0
    count2=0
    rem=r%(b+1)
    mul=r//(b+1)
    str=""
    while count1<r:
        str=str+("R")*mul
        count1=count1+mul
        if(rem):
            str+="R"
            count1=count1+1
            rem=rem-1
        if(count2<b):
            str=str+"B"
            count2=count2+1
    print(str)