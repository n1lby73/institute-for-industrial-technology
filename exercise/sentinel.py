userinput = int(input("What is your value: "))
sumed = 0

while userinput > 0:

    sumed+=userinput
    userinput = int(input("Input another value or enter 0 to see sum of all values enterd: "))    

print("\nYour sumed value is: ", sumed, "\n")