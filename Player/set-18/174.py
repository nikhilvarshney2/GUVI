u = list(input().split())
n2 = list(input().split())
for i in u:
    if i not in n2:
        print("1:"+i,end=" ")
for i in n2:
    if i not in u:
        print("2:"+i,end=" ")
