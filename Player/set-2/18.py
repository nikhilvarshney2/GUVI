def isAnagram(str1, str2=['a', 'a', 'b', 'z', 'k', 'l']):
    for z in range(len(str1)):
        if str1[z] != str2[z]:
            return 0
    return 1

count = 0
for _ in range(int(input())):
    str1 = sorted(input())
    count+=isAnagram(str1)
print(count)
