num = 5
fact = 1
if num == 0:
    print("the zero factorial is 1")
else:
    for i in range(1,num+1):
        fact = fact * i
print("factorial ",num,"is",fact)
