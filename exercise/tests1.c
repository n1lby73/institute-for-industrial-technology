#include <stdio.h>

int length_of_array;
int userNumber;
int constant;
int sorted;
int userInput;
int userInputTracking;
int arrayIndex;
int count;

int main(){


    printf("How many values do you want to sort: ");
    scanf("%d", &userInput);

    int array[userInput];

    printf("\nInput value number %d: ", userInputTracking);
    scanf("%d", &userNumber);

    while(( userNumber > 0) && (userInputTracking < userInput)){

        array[arrayIndex] = userNumber;

        arrayIndex++;
        userInputTracking++;
        count++;

        if (userInputTracking == userInput){

            printf("\nInput your last value: ");
            scanf("%d", &userNumber);

        }

        else{

            printf("\nInput value number %d: ", userInputTracking);
            scanf("%d", &userNumber);
            
        }
        

    }

   
    for( int i = 0; i < count; i++){

        for( int j = 0; j < count-1; j++ ){

           if (array[j] > array[j+1]){

                constant = array[j];
                array[j] = array[j+1];
                array[j+1] = constant;

           }

        }

    }

    printf("\nYour sorted array are: \n\n");


    while(sorted < count){

        printf("%d\n", array[sorted]);
        sorted+=1;

    }

}
