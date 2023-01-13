#include <stdio.h>

int sumed;
int input;
int mean;
int senitel = 0;
int count = 0;
int main(){

    printf("What is your value: ");
    scanf("%d", &input);

    while(input > senitel){
       
        sumed+=input;
        
        printf("Input another number or a value greater than 0: ");
        scanf("%d", &input);
        
        count+=1;

    }

    mean = sumed/count;

    printf("\nYour sumed value is ==> %d",sumed);
    printf("\nThe mean of all numbers is ==> %d",mean);
}
