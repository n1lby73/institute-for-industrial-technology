#include <stdio.h>

int array[]={};
int number;
int count;
int sum;
int arrayIndex;
int constant;
int sorted;
int highestvalue;
int mean;
int median;
int mode;
int midarray1;
int midarray2;
int newarray;

int main(){

    printf("Input a number: ");
    scanf("%d", &number);

    while(number > 0){

        count++;
        array[arrayIndex] = number;
        sum += number;
        arrayIndex ++;

        printf("Input a number: ");
        scanf("%d", &number);

    }

    for(int i = 0; i < count; i++){

        for(int j = 0; j <= count; j++){

            if(array[j] > array[j+1]){

                constant = array[j];
                array[j] = array[j+1];
                array[j+1] = constant;

            }

        }

    }

    // mean = sum/count;
    // highestvalue = array[arrayIndex-1];
    // printf("%d\n%d",arrayIndex,highestvalue);

    while(sorted <= count){

        printf("%d\n", array[sorted]);
        sorted+=1;

    }

}