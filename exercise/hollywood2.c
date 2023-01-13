#include <stdio.h>

int rate;
int userinput;
int average; 
int invalid;
int total = 2;
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

        printf("\nYou have %d trials left to input rating\nKindly input a value within the range of 0 and 4: ", total-invalid);
        scanf("%d", &userinput);

        invalid+=1;

        while(userinput > -1 && userinput <= 4){

            count+=1;
            rate+=userinput;
            printf("What is your rating for the movie: ");
            scanf("%d", &userinput);

        }

        if((invalid == 2) && (userinput != -1)){

            printf("\nNumber of trials excedded\n");
            break;


        }

    }

    average = rate/count;

    printf("\nAverage rating for this movie is: %d", average);

}