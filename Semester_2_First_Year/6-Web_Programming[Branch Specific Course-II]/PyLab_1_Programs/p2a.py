#Max of two Numbers
a = int(input("Enter the First Number :"))
b = int(input("Enter the Second Number :"))
if a!=b : 
 c = a if a>b else b #if else loop can also be used
 print("Greatest Number :",c)
else :
 print("Greatest Number(Both are Equal) :",a)