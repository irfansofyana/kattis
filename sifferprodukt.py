def f(x):
    ret = 1
    while (x > 0):
        if (x%10 != 0):
            ret *= (x%10)
        x = x // 10
    return ret


bil = int(input())
while (bil >= 10):
    bil = f(bil)

print(bil)