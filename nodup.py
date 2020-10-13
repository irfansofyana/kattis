arr = input().split(" ")
is_exist = {}

ada = False
for word in arr:
    if (word in is_exist):
        ada = True
        break
    else:
        is_exist[word] = True

print('no') if ada else print('yes')