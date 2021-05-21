# To compute the frequency of the words of input string and store the count of each word in dictionary


def count_word(str):
    dict_count = dict()
    words = str.split()
    for word in words:
        if word in dict_count:
            dict_count[word] += 1
        else:
            dict_count[word] = 1
    return dict_count


print(count_word('the quick brown fox jumps over the lazy dog.'))
