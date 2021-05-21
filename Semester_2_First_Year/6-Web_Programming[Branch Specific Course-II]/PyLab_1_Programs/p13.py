# Simple Calculator using Function
# Very Important Indentation Mistake in Python.. if & elif are in same line


def simcalc(n1, n2, operator):
    if(operator == "+"):
        return n1+n2
    elif (operator == "-"):
        return n1-n2
    elif (operator == "*"):
        return (n1*n2)
    elif (operator == "/"):
        if(n2 != 0):
            return n1/n2
        else:
            print("Divide by Zero Error!")
    elif (operator == "%"):
        return n1 % n2
    else:
        print("Enter a Valid Operator!")


n1 = int(input("Enter the First Number : "))
n2 = int(input("Enter the Second Number : "))
op = (input("Enter the Operator : "))
ans = simcalc(n1, n2, op)
print("Calculator Response : ", n1, " ", op, " ", n2, " = ", ans)
