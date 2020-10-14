n = int(input())
for _ in range(n):
    x = int(input())
    tot = 0 if (x > 0) else 1
    while (x > 0):
        tot += 1
        x = x // 10
    print(tot)