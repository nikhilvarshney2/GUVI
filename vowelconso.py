a=input()
l=[97,101,105,111,117,65,69,73,79,85]
if(len(a)==1):
    if(ord(a)>=65 and ord(a)<=122):
        c=ord(a)
        if c in l:
            print("Vowel")
        else:
            print("Consonant")
        
    else:
        print("invalid")
else:
    print("invalid")
