def sumofsquares(n):
    if n==1:
        return 1
    s=(n*n)+sumofsquares(n-1)
    return s

print(sumofsquares(5))