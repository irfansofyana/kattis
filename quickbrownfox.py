n = int(input())
for i in range(n):
    s = input()
    udah = [False] * 26
    for j in s:
        if (j >= 'A' and j <= 'Z'):
            udah[ord(j) - ord('A')] = True
        elif (j >= 'a' and j <= 'z'):
            udah[ord(j) - ord('a')] = True
    ans = []
    for j in range(26):
        if (not udah[j]):
            ans += chr(j + ord('a'))
    
    if (len(ans) == 0):
        print('pangram')
    else:
        print('missing', end = " ")
        for char in ans:
            print(char, end="")
        print()
