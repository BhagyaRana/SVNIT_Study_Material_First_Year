# Write a python program which takes string from the user and displays -
# (i)  The length of that string as a dictionary data structure.
# (ii) The no of occurances of each character of that string as a dictionary data structure.

str = input("Enter a String : ")
dict = {}
# Part I
d = {str: len(str)}
print(d)
# Part II
for i in str:
    dict[i] = str.count(i)
print(dict)
