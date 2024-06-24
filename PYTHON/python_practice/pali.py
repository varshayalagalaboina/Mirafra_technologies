def palindrome(n):	
	s=0
	r=0
	while n!=0:
		r=n%10
		n=n//10
		s=s*10+r
	return s

n=int(input("enter the number"))
z=palindrome(n)
if z==n:
	print("number is palindrome")
else:
	print("not palindrome")


