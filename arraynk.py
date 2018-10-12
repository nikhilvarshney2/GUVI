try:
    b=[]
    s=0
    n,k=map(int,input().split(' '))
    b=list(input().split(' '))
    c=[]
    if(len(b)==n):
        
        for i in b:
            c.append(int(i))
        for i in range(0,k):
            s=s+c[i]
        print(s)
    else:
        print("Invalid Input")
except:
    print("Invalid Input")
