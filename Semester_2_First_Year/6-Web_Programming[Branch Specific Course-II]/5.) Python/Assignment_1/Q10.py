# Write a python program to perform linear search on a list.

list = []
N = int(input("How many Elements do you want to Enter : "))
for i in range(0, N):
    a = input("Enter the string/Number : ")
    list.append(a)

search_word = input("Enter the Number/String to be Searched : ")
flag = 1
for x in list:
    if search_word in x:
        print("Found")
        flag = 0
        break

if(flag):
    print("Not Found")
