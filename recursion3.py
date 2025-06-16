def f3(n):
    if n>0:
        f3(n-1)
        print(2*n-1,end=' ')
        
f3(10)