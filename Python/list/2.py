'''list=["apple","banana","kiwi","cherry"]
newlist=[]
for x in list:
    if "a" in x:
         newlist.append(x)
print(newlist)'''
list=["apple","banana","mango","kiwi","cherry"]
newlist=[x for x in list if "a" in x]
print(newlist)


