#include<stdio.h>
#include<stdlib.h>

int main(){

    int pageView = 0;

    pageView = pageView+1;
    printf("Page view : %d\n", pageView);

    pageView = pageView+1;
    printf("Page view : %d\n", pageView);

    pageView = pageView+1;
    printf("Page view : %d\n", pageView);

    float balance = 1000.00;

    balance *= 1.1;
    // balance = balance * 1.1;
    printf("Balance is : %f\n", balance);

    balance *= 1.1;
    printf("Balance is : %f\n", balance);

    balance *= 1.1;
    printf("Balance is : %f\n", balance);


    return 0;
}
