def f4(n):
    if n>0:
        f4(n-1)
        print(2*n,end=' ')
f4(10)