def oddsum(n):
    if n==1:
        return 1
    s=(2*n-1)+oddsum(n-1)
    return s

print(oddsum(10))