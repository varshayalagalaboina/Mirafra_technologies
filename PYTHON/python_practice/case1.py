s="varsha"
def case(s):
	t=""
	for i in s:
		if (ord(i)>=97 and ord(i)<=122):
			t=t+chr(ord(i)-32)
	return t
 
x=case(s)
print(x)

