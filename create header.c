#include<stdio.h>
#include<stdlib.h>
#define MYNAME "Bucky Roberts" //constant
#include "BuckysInfo.h"

int main(){

    printf("My name is %s\n", MYNAME);

    int girlAge = (AGE / 2 + 5);

    printf("%s can date girls %d years old or older\n", NAME, girlAge);

    return 0;
}
