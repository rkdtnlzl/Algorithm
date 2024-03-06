n, m = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
res = []

res = a + b
res.sort()

print(" ".join(map(str, res)))