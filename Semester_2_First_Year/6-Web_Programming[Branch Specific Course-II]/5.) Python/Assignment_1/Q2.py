# Write a python program that combines two lists into a dictionary.

test_keys_list = ["Ram", "Shyam", "Ghanshyam"]
test_values_list = [3, 11, 29]

# Printing original keys-value lists
print("Original key list is : ", test_keys_list)
print("Original value list is : ", test_values_list)

dict1 = {}  # Empty Dictionary
for key in test_keys_list:
    for value in test_values_list:
        dict1[key] = value
        test_values_list.remove(value)
        break

print("Resultant dictionary is : ", dict1)  # Printing resultant dictionary

# METHOD 2

# combines lists into a dictionary & zip function working

# subjects=['ENG','M1','M3','CP','PHY','CHE']
# marks=[85,90,91,95,84,87]
# z=zip(subjects, marks)
# print(z)
# d=dict(z)
# print (d)
