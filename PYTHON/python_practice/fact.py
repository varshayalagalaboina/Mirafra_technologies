n=int(input("enter the num"))
def factorial(n):
	fact=1
	for i in range(1,n+1):
		fact=fact*i
	print("factorial of this",n,"is",fact)
factorial(n)

