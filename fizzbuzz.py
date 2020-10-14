x, y, n = map(int, input().split())
for i in range(1, n + 1):
    ans = ''
    if (i%x == 0):
        ans += 'Fizz'
    if (i%y == 0):
        ans += 'Buzz'
    print(i) if (len(ans) == 0) else print(ans)