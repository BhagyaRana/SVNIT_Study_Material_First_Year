# Cubes of First N Natural Numbers
n = int(input("Enter a Number : "))
k = 1
sum = 0
while((k <= n)):
    cube = (k*k*k)
    print("The Cube of ", k, " is : ", cube)
    sum += cube
    k = k + 1
print("The  Sum of Cubes from 1 to ", n, " is : ", sum)
