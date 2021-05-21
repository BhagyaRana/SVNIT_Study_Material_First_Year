# Calc Grade Of Student for 5 Subjects Marks
def calcgrade(m):
    if((m >= 85) and (m <= 100)):
        return "AA"
    elif ((m >= 75) and (m < 85)):
        return "AB"
    elif ((m >= 65) and (m <= 75)):
        return "BB"
    elif ((m >= 55) and (m < 65)):
        return "BC"
    elif ((m >= 45) and (m < 55)):
        return "CC"
    elif ((m >= 40) and (m < 45)):
        return "CD"
    elif ((m >= 36) and (m < 40)):
        return "DD"
    else:
        return "FF"


m1 = int(input("Enter the Subject 1 Marks : "))
m2 = int(input("Enter the Subject 2 Marks : "))
m3 = int(input("Enter the Subject 3 Marks : "))
m4 = int(input("Enter the Subject 4 Marks : "))
m5 = int(input("Enter the Subject 5 Marks : "))
print("------------------------------------------------")
print("Grade of Subject 1 : ", calcgrade(m1))
print("Grade of Subject 2 : ", calcgrade(m2))
print("Grade of Subject 3 : ", calcgrade(m3))
print("Grade of Subject 4 : ", calcgrade(m4))
print("Grade of Subject 5 : ", calcgrade(m5))
