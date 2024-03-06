
S = input()
L=[]
for i in range(len(S)):
    L.append(S[i:])
    
L.sort()

for l in L:
    print(l)