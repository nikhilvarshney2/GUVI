a=list(input().split(" "))
b=[]
try:
    if len(a)==3:
        for i in a:
            b.append(int(i))
        print(max(b))
    else:
        print("Invalid Input")
except:
    print("Invalid Input")
