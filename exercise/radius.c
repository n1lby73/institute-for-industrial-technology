#include <stdio.h>
int radius;

int main(){
    printf("Enter your digit: ");
    scanf("%d", &radius);
    int diameter = radius * 2;
    int circumfrence = diameter * 3.142;
    printf("\nThe diameter is: %d\n", diameter);
    printf("The circumfrence is : %d\n", circumfrence);

}
