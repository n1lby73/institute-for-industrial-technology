#include <stdio.h>

float cm;
float inches;
float pound;
float gram;
float size;
float cmToInches = 2.54;
float gramToPound = 453.59;

int main(){

    printf("Enter your height in inches: ");
    scanf("%f", &inches);

    printf("\nEnter your weight in pounds: ");
    scanf("%f", &pound);


    cm = inches * cmToInches;
    gram = pound * gramToPound;

    size = (((1/3)*gram) + cm);

    printf("\nYour gown size is: %f\n", size);

    printf("\nEnd of job");
}