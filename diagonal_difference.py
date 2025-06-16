n=3
arr=[]
for _ in range(n):
    arr.append(list(map(int,input().rstrip().split())))
    
print(arr)
l=[]
m=[]
for i in range(n):
    l.append(arr[i][n-1])
    m.append(arr[i][i])
    i+=1
    n-=1
print(l)
print(m)
sum1=sum(l)
sum2=sum(m)
print(abs(sum1-sum2))