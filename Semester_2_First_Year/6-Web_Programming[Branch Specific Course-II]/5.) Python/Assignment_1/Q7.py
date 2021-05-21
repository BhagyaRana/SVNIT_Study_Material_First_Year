# Write a python program which takes string from the user for a specific no of times and displays the length of those strings  as a dictionary data structure.

list1 = []
for i in range(1, 5):  # Taking 4 Inputs
    a = input("Enter the string : ")
    list1.append(a)

dict1 = {}
for i in list1:
    dict1[i] = len(i)
print("Dictionary is", dict1)
