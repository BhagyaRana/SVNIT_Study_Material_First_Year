#Max of two Numbers
a = int(input("Enter the First Number :"))
b = int(input("Enter the Second Number :"))
c = int(input("Enter the third Number :"))
if a>=b:
 if a>=c:
  print("Greatest Number :",a)
 else:
  print("Greatest Number :",c)
else:  
 if b>=c:
  print("Greatest Number :",b)
 else:
  print("Greatest Number :",c) 