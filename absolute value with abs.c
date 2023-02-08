#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

int main(){

    int year1;
    int year2;
    int age;

    printf("Enter a year: \n");
    scanf("%d", &year1);

    printf("Enter another year: \n");
    scanf("%d", &year2);

    age = year1 - year2;
    printf("Age is : %d \n", age);

    age = abs(age);
    printf("Age is : %d \n", age);

    printf("cube of your age is: %f \n", pow(age,3));
    printf("Squre root of your age is: %f \n", sqrt(age));

    printf("\n%f \n", pow(5,3));
    printf("%f \n", sqrt(175));


    return 0;
}
