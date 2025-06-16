def sum(n):
    if n==1:
        return 1
    s=(n)+sum(n-1)
    return s

print(sum(5)) # Expected output: 15