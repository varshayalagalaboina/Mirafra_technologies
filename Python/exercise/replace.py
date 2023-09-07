s=input("enter the string\n")
c=input("enter the character\n")
x=input("replace character\n")

def replace(s,c,x):
    s1=""
    for i in s:
        if i==c:
            i=x
            s1=s1+i
        else:
            s1=s1+i
            #print(c)
    print(s1)
replace(s,c,x)
