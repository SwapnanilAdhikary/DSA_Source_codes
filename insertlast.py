def insert(arr,lb,ub,item,size):
    arr[ub+1]=item
    return arr
arr=[1,2,3,4,5,None]
lb=0
ub=4
size=len(arr)
item=28
print(insert(arr,lb,ub,item,size))