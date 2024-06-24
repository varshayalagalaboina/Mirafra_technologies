
def even(n):
	c=0
	print("even num")
	for i in range(1,n+1):
		if i%2==0:
			c=c+1
			print(i)
	return c
def odd(n):
	c1=0
	print("odd num")
	for i in range(1,n+1):
		if i%2==1:
			c1=c1+1
			print(i)
	return c1

n=int(input("enter the num\n"))
x=even(n)
print("even count",x)
y=odd(n)
print("odd count",y)
