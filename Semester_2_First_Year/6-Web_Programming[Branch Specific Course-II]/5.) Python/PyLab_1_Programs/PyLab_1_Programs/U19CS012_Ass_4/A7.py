#Compund Interest  
p = int(input("Enter the Principal :"))
r = int(input("Enter the Rate of Interest(%):"))
t = int(input("Enter the Time(in yrs) :"))
t1 = (1 + (r/100))
t2 = 1
while(t):
 t2 *= t1
 ci = p*t2
 t -= 1
print("Compund Interest : ",ci-p)