n=int(input("enter the number\n"))
r=0
s=0
x=n
for i in range(n):
    r=n%10
    n=n//10
    s=s+(r**3)
print(s)
if x==s:
 print("the num is armstrong num\n")
else:
 print("the num is not armstrong num\n")


