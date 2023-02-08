#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

int main(){

    int i;
    int diceRoll;
    //int howManyRolls;
    int sum=0;
    char guess;
    int avg;
    int nxtRoll=0;

    /*(printf("How many times you want to roll the dice? ");
    scanf(" %d ", &howManyRolls);*/

    for(i=0; i<10; i++){
        diceRoll = (rand()%6)+1; //random number mod by 6
        printf("%d \n", diceRoll);
        sum +=diceRoll;
    }


    avg = sum/10;
    printf("All roll's avarege is: %d ", avg);

    printf("\nGuess next roll is high/low/same(h/l/s): \n");
    scanf("%c", &guess);

    nxtRoll = (rand()%6)+1;
    printf("%d \n", nxtRoll);

    if(nxtRoll == avg && guess == 's'){
        printf("Your guess is correct\n");
    }
    else if(nxtRoll < avg && guess == 'l'){
        printf("Your guess is correct\n");
    }
    else if(nxtRoll > avg && guess == 'h'){
        printf("Your guess is correct\n");
    }
    else{
        printf("You are incorrect!!\n");
    }


    return 0;
}
