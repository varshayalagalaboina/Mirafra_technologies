s="varsha is a good girl"
d={}
l=s.split()
l1=[]
count=0
print(l)
for i in l:
        count=count+1
        l1.append(count)
for k , v in zip(l,l1):
    d[k]=v
print(d)
