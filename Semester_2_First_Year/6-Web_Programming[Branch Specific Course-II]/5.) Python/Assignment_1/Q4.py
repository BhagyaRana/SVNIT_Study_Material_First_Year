# Write a python program using function which counts the occurrence of words in string and display it as a dictionary data structure.


def word_count(str):
    dict1 = dict()
    words = str.split()
    for x in words:         # x (iterator) is for each word in words list
        if x in dict1:
            dict1[x] += 1
        else:
            dict1[x] = 1
    return dict1


print(word_count("You are Born Original Dont Die Like a Copy"))
