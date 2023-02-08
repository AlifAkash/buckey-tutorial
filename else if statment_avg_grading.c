#include<stdio.h>
#include<stdlib.h>

int main(){

    float grade1, grade2, grade3;
    float avg;

    printf("Enter your 3 grades:\n");
    scanf(" %f", &grade1);
    scanf(" %f", &grade2);
    scanf(" %f", &grade3);

    avg = (grade1 + grade2 + grade3) / 3;

    printf("Your average grade is %.2f\n", avg);

    if(avg >= 90)
    {
        printf("Your grade is A\n");

    }

    else if(avg >= 80)
    {
        printf("Your grade is B\n");
    }

     else if(avg >= 70)
    {
        printf("Your grade is C\n");
    }

     else if(avg >= 60)
    {
        printf("Your grade is D\n");
    }

     else
    {
        printf("You are dumb\n");
    }

    return 0;
}
