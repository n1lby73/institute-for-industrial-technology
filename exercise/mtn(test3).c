#include <stdio.h>

int local = 0;
int international =1;
int userInput;
int time;
int discount;
int amount;
int interdis = 10.0/100.0;
int localdis = 20.0/100.0;

int main(){

    printf("Do you want to make a local call or international call:\n\n0 = Local call\n1 = International call\n\nKindly make your selection: ");
    scanf("%d", &userInput);

    printf("How many minute do you want to use: ");
    scanf("%d", &time);

    if (userInput == international){

        int total = 30 * time;
        
        if (time > 15){

           discount = (float)total * interdis;
           amount = (float)total - discount;
           printf("\nThe total cost is ==> %d", amount);

        }

        else {
            
            printf("\nThe total cost is %d", total);
        
        }

    }

    else if (userInput == local){

        int total = 10 * time;

        if (time > 20){

           discount = (float)total * localdis;
           amount = (float)total - discount;

           printf("\nThe total cost is ==> %d", amount);

        }

        else {
            
            printf("\nThe total cost is %d", total);
        
        }

    }

    else{

        printf("invalid selection");
    } 

}