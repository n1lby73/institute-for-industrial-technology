#include <stdio.h>

int firstValue;
int secondValue;
int sum;

int main(){

    printf("What is the first value: ");
    scanf("%d", &firstValue);

    printf("What is the second value: ");
    scanf("%d", &secondValue);

    sum = firstValue+secondValue;

    printf("\nThe sum of both value is: %d", sum);  
}