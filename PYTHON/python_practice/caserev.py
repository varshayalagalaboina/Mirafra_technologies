s="VARsha"
def case(s):
	t=""
	for i in s:
		if (ord(i)>=65 and ord(i)<=90):
			t=t+chr(ord(i)+32)
		elif (ord(i)>=90 and ord(i)<=122):
			t=t+chr(ord(i)-32)
	return t
 
x=case(s)
print(x)


