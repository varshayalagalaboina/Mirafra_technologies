#a=[i for i in range(0,101)]
#print(a)

a=[chr(i) for i in range(65,92)]
print(a)

'''m=[1,2,3,4,5,6,7,8,9,10]
a=[i for i in m if i%2!=0]
print(a)'''

'''a=[1,2,3,4,5]
b=[7,8,4,3,2]
x=[i for i in a if i not in b]
print(x)'''

#a=[chr(i) for i in range(97,122) if chr(i) not in ['a','e','i','o','u']]
#print(a)

'''s="there is an apple"
x=[len(i) for i in s.split()]
print(x)'''

'''s="there is an apple"
count=0
x=[count(i) for i in s  if count(i) not in ['a','e','i','o','u']]
print(x) not complete'''

a=[3,2,1,4,5,6]
odd=[i for i in a if i%2!=0]
print(odd)




