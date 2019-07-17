import collections as c
avail = input()
v= list(map(int,input().split()))
acr = c.Counter(v)
same = []
for item,counting in acr.items():
    if counting >1 :
        same.append(item)
if same:
    print(*same)
else:
    print("unique")
v
