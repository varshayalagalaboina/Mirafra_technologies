i=2
a= input("enter num")
for i in range(2,a):
    if a % i == 0: 
        print("not prime num")
        break
else:
    print("prime numbers")
