def canWe(l):
    u=0
    n = len(l)
    for i in range(n//2):
        if l[i]!=l[-i-1]:
            u+=1
        if u>1:
            return "no"
    return "yes"
print(canWe(input()))
