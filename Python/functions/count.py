s="hellopythonhelloworldpythonhellopythonworld"
sub="hello"
pos=0
count=0
for i in range(len(s)):
    index=s.find(sub,pos)
    if index==-1:
        break
    count=count+1
    pos=index+len(sub)
print(count)
