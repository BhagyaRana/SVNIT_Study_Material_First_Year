# Print Factors of Given Number
import math
n = int(input("Enter a Number Whose Factors Needs to Be Found : "))
# Approach 1 : 1 to n and if remainder 0 print it

# k = 1
# ans = []
# while(k <= n):
#     if((n % k) == 0):
#         ans.append(k)
#     k = k+1
# for i in ans:
#     print(i, end=" ")

# Approach 2 : 1 to sqrt(n) if remainder 0 print both factors(check if not equal as well)

k = 1
ans = []
while(k <= math.sqrt(n)):
    if((n % k) == 0):
        if(k != (n/k)):
            ans.append(k)
            ans.append(int(n/k))
        else:
            ans.append(k)
    k = k+1
ans.sort()
for i in ans:
    print(i, end=" ")
