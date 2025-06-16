matrix = [[112, 42, 83, 119], [56, 125, 56, 49],[15, 78, 101, 43], [62, 98, 114]]
q=1
n=2
m=len(matrix)
if q>=1:
    for i in range(len(matrix)):
        matrix[q-1][i]=matrix[q-1][m-1]
        i+=1
        m-=1
if n>=1:
    for i in range(len(matrix)):
        matrix[i][q-1]=matrix[m-1][q-1]
        m-=1
        i+=1
        
print(sum(matrix[0]))