
N = int(input())
L=[]

for _ in range(N):
    a = int(input())
    L.append(a)
    
L = sorted(L)

ans = []

for i in range(0,N):
    cnt = 0
    for j in range(L[i],L[i]+5):
        if j not in L:
            cnt+=1
    
    ans.append(cnt)

print(min(ans))
    

