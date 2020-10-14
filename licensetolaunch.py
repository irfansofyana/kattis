n = int(input())
arr = list(map(int, input().split()))

mini = None
idx = None
for i in range(n):
    if (i == 0):
        idx = i
        mini = arr[i]
    elif (arr[i] < mini):
        mini = arr[i]
        idx = i

print(idx)