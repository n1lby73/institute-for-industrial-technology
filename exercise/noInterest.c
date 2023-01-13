#include <stdio.h>

int acctnumber;
float balance;
float balancedue;
float constant = 0.0;

int main(){

    printf("Input your account number: ");
    scanf("%d",&acctnumber);

    printf("Input your balance: ");
    scanf("%f", &balance);

    balancedue = balance;

    if(acctnumber > 0){

        while(balance > constant){

            balance = balance - (balancedue*0.1);

            while(balance == 0.00){

                printf("\nYou have succesfully completed your payment\n");

                printf("\nStarting new customer\n");

                printf("\nInput your account number: ");
                scanf("%d",&acctnumber);

                printf("Input your balance: ");
                scanf("%f", &balance);

            }
            

                // if((acctnumber != 0) && (acctnumber < 0)){


                    printf("Invalid account number detected ??!!! \nexiting program................ ");

                // }

                printf("\nyour balance is: %.2f\n", balance);

            }

            
            
        }

    }
        
