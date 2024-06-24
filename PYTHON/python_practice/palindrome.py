n=int(input("enter the number"))
def palindrome(n):
	r=0
	s=0
	for i in range(n):
		r=n%10
		n=n//10
		s=(s*10)+r
	return s

a=palindrome(n)
print("number is palindrome",a)
		
