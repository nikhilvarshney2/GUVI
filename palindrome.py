try:
    n=int(input())
    a=str(n)
    if(len(a)<=1000 and n>=0):
        r=0
        s=0
        m=n
        while(n!=0):
            r=n%10
            s=s*10+r
            n=int(n/10)
        if(m==s):
            print("yes")
        else:
            print("no")
            
    else:
        print("invalid Input")
except:
    print("Invalid Input")
