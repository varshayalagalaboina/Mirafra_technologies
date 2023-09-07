n=int(input("enter the number\n"))
r=0
s=0
while n!=0:
    r=n%10
    n=n/10
    s=(s*10)+r
print(s)

if(n==s):
        print("palindrome\n")
else:
    print("not palindrome\n")
