#include <stdio.h>

int wholesalePrice;
int retailPrice;
int result;

int main(){

    printf("Input wholesale price: ");
    scanf("%d", &wholesalePrice);

    printf("\nInput retail price: ");
    scanf("%d", &retailPrice);

    result = retailPrice - wholesalePrice;

    printf("\nThe profit is: %d", result);

    printf("\n\nThanks for using this program");


}