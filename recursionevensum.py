def evensum(n):
    if n==0:
        return 0
    s=(2*n)+evensum(n-1)
    return s

print(evensum(5)) # Expected output: 30