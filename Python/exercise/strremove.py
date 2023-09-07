s=input("enter the string\n")
def strremove(s):
    for i in range(len(s)):
        if(s[i]>='A' and s[i]<='Z' or s[i]>='a' and s[i]<='z'):
            print(s[i])



strremove(s)
#print(a)
