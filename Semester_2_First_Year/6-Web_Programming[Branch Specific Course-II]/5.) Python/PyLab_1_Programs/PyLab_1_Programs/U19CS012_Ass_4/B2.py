#Find Smallest and Largest Digit from Given Number
n = int(input("Enter a Number : "))
orginalnum = n
s = 0 # Smallest Number
l = 0 # Largest Number
while(n):
    digit = n%10
    if(digit<=s):
     s  = digit
    if(digit>=l):
     l = digit
    n = n//10

 print("The Largest Digit of ",orginalnum," is : ",l)
 print("The Smallest Digit of ",orginalnum," is : ",s)
