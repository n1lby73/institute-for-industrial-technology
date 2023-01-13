#include <stdio.h>

float centimeter;
int inches;

int main(){
    printf("Enter your value in inches: ");
    scanf("%d", &inches)

    centimeter = (float)inches/0.394;

    printf("\nThe corresponding value in inches is: %f", centimeter);
}