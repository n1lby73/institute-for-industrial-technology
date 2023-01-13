#include <stdio.h>

int payRate;
int hoursWorked;
int grossPercent;
int grossPay;
int witholdingAmount;
int netPay;

int main(){

    printf("What is the company pay rate: ");
    scanf("%d", &payRate);

    printf("How many hours did in worker worked: ");
    scanf("%d", &hoursWorked);

    printf("What is the gross salary percentage: ");
    scanf("%d", &grossPercent);

    grossPay = payRate*hoursWorked;
    witholdingAmount = grossPay*(grossPercent/100);
    netPay = grossPay-witholdingAmount;

    printf("\nThe net pay is: %d", netPay);  
}