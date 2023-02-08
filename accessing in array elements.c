#include<stdio.h>
#include<stdlib.h>

int main()
{

    char name[15] = "Buckey Roberts";
    printf("my name is %s\n", name);

    name[2] = 'z';
    printf("my name is %s\n", name);

    char food[] = "Tuna";
    printf("The best food is %s\n", food);

    strcpy(food, "Bacon");
    printf("The best food is %s\n", food);

    return 0;
}
