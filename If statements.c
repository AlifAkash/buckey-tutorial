#include<stdio.h>
#include<stdlib.h>

int main(){
    /*
        if(test) {   if test is true
            code;     run the code;
        } else
        {

        }
    */

    if(4 < 10)
    {
        printf("Easy hoss\n");
    }

    if(4 > 10)
    {
        printf("Meatball\n");
    }

    int age;
    char gender;

    printf("What is your age?\n");
    scanf(" %d", &age); // must use a blank space before %d/%c/%s/%f/%lf in seanf cotetion

    printf("What is your gender? (m/f)\n");
    scanf(" %c", &gender); // must use a blank space before %d/%c/%s/%f/%lf in seanf cotetion

    if(age >= 18)
    {
        printf("You may enter this website ");

        if(gender == 'm')
        {
            printf("Dude");
        }

        else
        {
            printf("M'lady");
        }

    }

    else
    {
        printf("Nothing to see here");
    }

    return 0;
}
