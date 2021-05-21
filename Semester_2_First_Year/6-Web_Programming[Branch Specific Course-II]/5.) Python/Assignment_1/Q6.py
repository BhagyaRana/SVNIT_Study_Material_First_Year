# Write a python program to insert a word at a specific position in string.
# Prompt the user for :
# (i)   input string,
# (ii)  word which is to be inserted,
# (iii) position where it is to be inserted.

# python program to insert a word at given position in string

string = input("Enter input string : ")
word = input("Enter word which is to be inserted : ")
word = word + " "
N = int(input("Enter the position(Index)(Space Character Position) where it is to be inserted : "))
# print("The original string : ",string)
# print("The Word : ",word)
# print("The Position(Index) where it is to be inserted : ",N)
# using  list() + insert() + join()
res = list(string)
res.insert(N, word)
res = ''.join(res)

print("Final Resultant String : ", res)
