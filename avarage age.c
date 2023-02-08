#include<stdio.h>
#include<stdlib.h>

int main(){

    int a, b, c;

    a = b= c = 100;

    printf("%d %d %d\n", a, b, c);

    float age1, age2, age3;
    float average;

    age1 = age2 = 4;

    printf("Enter your age :\n");
    scanf("%f", &age3);

    average = (age1 + age2 + age3)/ 3;

    printf("Average age is : %f\n", average);

    return 0;
}
