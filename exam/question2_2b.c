#include <stdio.h>

float cm;
float inches;
float pound;
float gram;
float size;
float cmToInch = 2.54;
float gramToPound = 453.59;  

int main(){

    printf("Enter your height in inches: ");
    scanf("%f", &inches);

    while(inches > 0 ){

        printf("\nEnter your weight in pounds: ");
        scanf("%f", &pound);

        cm = inches * cmToInch;
        gram = pound * gramToPound;

        size = ((gram/3) + cm);

        printf("\nYour gown size is ==> %f", size);

        printf("\n\nEnter your height in inches: ");
        scanf("%f", &inches);


    }

    printf("\nEnd of job");

}