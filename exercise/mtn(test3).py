print ("\ninternational = 1")
print ("local = 0")
print(" ")

user = int(input("\nplease choose: "))

print (" ")

time = int(input("\nhow long would the call last: "))

if user == 1:

    total = time*30

    if time > 15:

        discount = total * (10/100)
        amount = total - discount
        print ("\nThe total cost is ==> ", amount)

    else:

        print (total)

elif user == 0:
    
    total = time*10

    if time > 20:

        discount = total * (20/100)
        amount = total - discount
        print ("\nThe total cost is ==> ", amount)

    else:

        print (total)

else:

    print ("\ninvalid")