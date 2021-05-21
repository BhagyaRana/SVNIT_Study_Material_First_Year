#Armstrong Number
n = int(input("Enter to Check if its Armstrong : "))
temp = n #Always take Backup of the Number!!Important Mistake!
sum = 0
while(n) :
	digit = n%10
	print("digit",digit)
	sum = sum + (digit**3)
	print("sum = ",sum)
	n = n//10
	print("n = ",n)

if (temp == sum) :
 print("Armstrong Number!!")
else : 
 print("Not Armstrong Number!!")