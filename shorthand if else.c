#include<stdio.h>
#include<stdlib.h>

int main(){

    char lastName[20];
    int friends;


    printf("Enter your name: \n");
    scanf("%s", &lastName);

    printf("How much friend do you have?\n");
    scanf(" %d", &friends);

    (lastName[0] < 'm') ? printf("You are in Red taem\n") : printf("You are in Blue taem\n");


    printf("You have %d friend%s\n", friends, (friends!=1)? "s" : "" );

    return 0;
}
