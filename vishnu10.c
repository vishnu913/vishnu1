N,K=map(int,input().split())
arr=[]
arr=[int(i) for i in input().split()]
add=0
i=0
while K>0:
  add+=arr[i]
  K=K-1
  i=i+1
print(add)
