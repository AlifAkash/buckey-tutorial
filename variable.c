
#include<stdio.h>
#include<stdlib.h>

int main(){

    /*
        x= mealball
        I love x;
        variables are like placeholders;
    */

    int age;
    age = 27;

    printf("Buckey's age is %d\n", age);

    int age2;
    int birthyear;
    int currentyear;

    printf("What is your Birthyear = ");
    scanf("%d",&birthyear);

    printf("What is current year = ");
    scanf("%d",&currentyear);

    age2 = currentyear - birthyear;

    printf("Your age is %d", age2);

    return 0;
}
