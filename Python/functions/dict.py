s="dictionary comprehension"
l=[]
l1=[]
d={}
for i in range(len(s)):
    l.append(s[i])
    l1.append(i)
    for k,v in zip(l,l1):
        d[k]=v
print(d)
