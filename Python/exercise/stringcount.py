s="varsha is a good girl is"
d={}
l=s.split()
l1=[]
print(l)
for i in l:
    c=0
    for j in i:
        if j.isalpha():
            c=c+1
        d[i]=c
#d={i:l.count(i) for i in l}
print(d)
