def prime(n):
	c=0
	for j in range(1,i+1):
		if i%j==0:
			c=c+1
	if c==2:
		return i
	else:
		return 0
n=15
for i in range(1,n+1):
	m=prime(n)
	if(m==0):
		continue
	else:
		print(m)
