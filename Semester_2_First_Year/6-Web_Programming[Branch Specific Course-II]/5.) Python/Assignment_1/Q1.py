# Write a function to find all duplicates in the list.


def FindDuplicates(a):
    for item in a:
        if a.count(item) > 1:
            duplicates.append(item)


a = [1, 1, 2, 3, 3]  # Take this Sample Example
print("The Original List is : ", a)
duplicates = []  # Initialise empty list
FindDuplicates(a)  # Call the Function
duplicates_set = set(duplicates)  # Convert to Set for Unique Duplicates
print("All Duplicates in List are : ", duplicates_set)
# print(duplicates_set)
