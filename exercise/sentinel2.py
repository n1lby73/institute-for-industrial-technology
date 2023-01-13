userinput = int(input("What is your value: "))

sumed = 0
count = 0
senitel = 0

while userinput > senitel:
    
    sumed+=userinput

    count+=1

    userinput = int(input("Input another value or enter 0 to see sum of all values enterd: "))

mean = sumed/count

print ("\nYour sumed value is ==> ",sumed)
print ("\nThe mean of all numbers is ==> ",mean, "\n")
    