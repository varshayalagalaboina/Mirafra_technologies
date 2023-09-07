s="MirafrA tEchnologies Embedded SystEms"
d={}
l=[]
l1=[]
c1=0
c2=0
c3=0
c4=0
c5=0
print(s)
for i in s:
    if(i=='a'):
        c1=c1+1
        l.append(i)
        l1.append(c1)
    if(i=='e'):
        c2=c2+1
        l.append(i)
        l1.append(c2)
    if(i=='i'):
        c3=c3+1
        l.append(i)
        l1.append(c3)
    if(i=='o'):
        c4=c4+1
        l.append(i)
        l1.append(c4)
    if(i=='u'):
        c5=c5+1
        l.append(i)
        l1.append(c5)
print(l)
'''c=c1+c2+c3+c4+c5
l.append(i)
l1.append(c)'''
for k , v in zip(l,l1):
    d[k]=v
print(d)

