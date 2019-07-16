vis1 = int(input())
mat1 = list(map(int,input().split()))
pqt1 = 0
for i in range(vis1):
    for l in range(i,vis1):  
        for k in range(l,vis1):
            if mat1[i]<mat1[l]<mat1[k]:
                pqt1+=1
print(pqt1)
