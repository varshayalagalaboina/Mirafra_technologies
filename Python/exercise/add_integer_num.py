n=int(input("enter the num\n"))
s=0
while n!=0:
    r=n%10
    n=n//10
    s=s+r
print(s)
