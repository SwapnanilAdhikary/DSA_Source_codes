n=4
a=[1,1,2,3,1]
l=[0]*n

for i in range(len(a)-1):
    l[i]=l[i]+a.count(i)
    i+=1
print(l)