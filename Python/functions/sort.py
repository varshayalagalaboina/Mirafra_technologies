l=[10,9,8,50,1,4,6]
def sort_fun(l):
    for i in range(len(l)):
        for j in range(i+1,len(l)):
            if l[i]>l[j]:
                l[i],l[j]=l[j],l[i]
    return l
s=sort_fun(l)
print(s)
