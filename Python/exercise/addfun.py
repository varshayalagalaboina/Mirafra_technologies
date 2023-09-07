def addition(*args):
    add=0
    for i in args:
        add=i+add
    print(add)
addition(8,3)

def substraction(*args):
    sub=0
    for i in args:
        sub=i-sub
    print(sub)
substraction(8,4)

def multiplication(*args):
    mul=1
    for i in args:
        mul=i*mul
    print(mul)
multiplication(7,5)

def division(*args): 
    div=0
    for i in args:
        div=div//i
    print(div)
division(4,2)

def modulus(*args):
    mod=0
    for i in args:
        mod=mod%i
    print(mod)
modulus(8,5)

    
