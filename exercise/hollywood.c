#include <stdio.h>

int rate;
int userinput;
int average;
int count;

int main(){

    printf("What is your rating for the movie: ");
    scanf("%d", &userinput);

    while (userinput > -1 && userinput <= 4){

        rate+=userinput;
        count+=1;

        printf("What is your rating for the movie: ");
        scanf("%d", &userinput);

    }

    while(userinput != -1){

        printf("kindly input a value within the range of 0 and 4: ");
        scanf("%d", &userinput);

        while(userinput > -1 && userinput <= 4){

            count+=1;
            rate+=userinput;
            printf("What is your rating for the movie: ");
            scanf("%d", &userinput);

        }

    }

    average = rate/count;

    printf("Average rating for this movie is: %d", average);

}