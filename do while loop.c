#include<stdio.h>
#include<stdlib.h>

int main(){

    float total = 0;
    float scoreEntered = 0;
    float numOftest = 0;
    float average = 0;

    printf("Press 0 when complete.\n\n");

    do {
        printf("Test: %.0f \t Average: %.2f\n", numOftest, average);

        printf("\nEnter your score: ");
        scanf("%f", &scoreEntered);

        total = total + scoreEntered;
        numOftest++;
        average = total/numOftest;
    }
    while(scoreEntered != 0);

    return 0;
}

