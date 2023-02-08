#include<stdio.h>
#include<stdlib.h>

int main(){

    char firstName [20];
    char crushName [20];
    int numOfChild;

    printf("What is your name?\n");
    scanf("%s", &firstName);

    printf("Who are you want to marry?\n");
    scanf("%s", &crushName);

    printf("How many children will you have?\n");
    scanf("%d", &numOfChild);

    printf("%s and %s are in love and will have %d babies\n", firstName, crushName, numOfChild);

    return 0;
}
