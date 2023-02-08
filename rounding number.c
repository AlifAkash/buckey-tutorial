#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

int main(){

    float a = 9.6542;
    float b = 3.4;

    printf("%.2f \n", floor(a));
    printf("%.2f \n", floor(b));

    printf("%.2f \n", ceil(a));
    printf("%.2f \n", ceil(b));

    return 0;
}
