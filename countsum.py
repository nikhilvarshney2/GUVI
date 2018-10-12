try:
    n=input()
    a=int(n)
    c=0
    while a!=0:
        a=int(a/10)
        c=c+1
    print(c)
except:
    print("Invalid Input")

