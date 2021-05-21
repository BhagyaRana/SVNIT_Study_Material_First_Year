# Write a python program to compute the number of characters, words and lines in string.


def count_l_w_c(name):

    words = 0
    chars = 0
    lines = 0
    # Count the Number of Word by Splitting with Space
    split_string = name.split()
    words = len(split_string)
    # Count the Number of Characters by Counting Length of Words
    for x in split_string:          # x(iterator) means each word
        chars += len(x)
    # Count the Number of Lines by using Splitlines Function
    lines = len(name.splitlines())

    print("Words: ", words)
    print("Lines: ", lines)
    print("Characters: ", chars)


str_line = '''This is first Line
This is Awesome Second Line
And Finally this is Third Line!'''  # Original String
print(str_line)  # Print it
count_l_w_c(str_line)  # Call the Function
