n = int(input("Enter the Number whose Factorial needs to be found :"))
fact = 1
while n!=1 :
	fact *= n
	n -= 1
print("Factorial of Above Number : ",fact)