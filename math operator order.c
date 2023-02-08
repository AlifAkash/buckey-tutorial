#include<stdio.h>
#include<stdlib.h>

/*
    We can remember the order using PEMDAS: Parentheses, Exponents,
    Multiplication and Division (from left to right),
    Addition and Subtraction (from left to right).
 */

int main(){

    int a = 4+2*6;
    printf("Result : %d\n", a);

    a= (4+2)*6;
    printf("Result : %d\n", a);

    int b = 4+2*6/2;
    printf("result : %d\n", b); // first division (/) then multification (*) then addition (+) order.
    b = ((4+2)*6)/2;
    printf("result : %d", b);

    return 0;
}
