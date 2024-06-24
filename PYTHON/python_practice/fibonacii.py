def fibonaci(n,a,b):
	c=a+b
	return c	

n=int(input("enter the num"))
a,b=0,1
print(a,b)

for i in range(n+1):
	x=fibonaci(n,a,b)
	print(x)
	a=b
	b=x
