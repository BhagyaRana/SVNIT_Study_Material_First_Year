#Matrix Multiplication

a = [[1,2,3],[4,5,6],[7,8,9]]
b = [[1,2,3],[4,5,6],[7,8,9]]
i=0
j=0
c = [[0,0,0],[0,0,0],[0,0,0]]
for i in range(3):
 for j in range(3):
  for k in range(3):
   c[i][j] += a[i][k]*b[k][j]
   
print(c)

