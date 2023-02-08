#include<stdio.h>
#include<stdlib.h>
#include"userInfo.h"

int main(){

    struct user bucky;
    struct user emily;

    bucky.userId=1;
    emily.userId=2;

    puts("Enter first name of user 1: ");
    gets(bucky.firstName);
    puts("Enter last name of user 2: ");
    gets(emily.lastName);

    printf("\nUser 1 Id is: %d", bucky.userId);
    printf("\nUser 2 Name is: %s", emily.lastName);

    return 0;
}
