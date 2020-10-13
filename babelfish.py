from sys import stdin

kamus = {}

while(True):
    s = input()
    if (len(s) == 0):
        break
    else:
        english, foreign = s.split(' ')
        kamus[foreign] = english

for line in stdin:
    line = line.replace('\n', '')
    if (line in kamus):
        print(kamus[line])
    else:
        print('eh')