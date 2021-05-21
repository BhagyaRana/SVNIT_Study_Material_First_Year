# To get a string from a given string where all occurrences of its first char have been changed to '$',
# except the first char itself.


def change_occur(str1):
    char = str1[0]
    str1 = str1.replace(char, '$')
    str1 = char + str1[1:]
    return str1


# Eg : assassination (2ns and 3rd "a" will be replaced by dollar)
str = input("Enter a String : ")
print(change_occur(str))
