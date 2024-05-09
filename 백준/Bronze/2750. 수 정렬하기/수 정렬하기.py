N = int(input())
arr = []
for i in range(N):
    a = int(input())
    arr.append(a)

arr.sort()

for i in arr:
    print(i)