#include <stdio.h>

int sumed;
int input;
int main(){

    printf("What is your value: ");
    scanf("%d", &input);

    while(input > 0){
       
        sumed+=input;
        printf("What is your value: ");
        scanf("%d", &input);

    }

    printf("\nYour sumed value is ==> %d",sumed);

}
