payRate = int(input("What is the company pay rate: "))

hoursWorked = int(input("How many hours did in worker worked: "))

grossPercent = int(input("What is the gross salary percentage: "))

grossPay = payRate*hoursWorked

witholdingAmount = grossPay*(grossPercent/100)

netPay = grossPay-witholdingAmount

print ("The net pay is: ", netPay)