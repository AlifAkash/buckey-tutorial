#include<stdio.h>
#include<stdlib.h>

void passbyvalue(int i);
void passbyreference(int *i);

int main(){

    int tuna = 20;

    passbyvalue(tuna);
    printf("Pass by value, Tuna is now %d\n", tuna);//when its passing as value then the value of variable remain unchanged in main function

    passbyreference(&tuna);
    printf("Pass by reference, Tuna is now %d\n", tuna);//when its passing as reference then the value of variable changed in main function

    return 0;
}

void passbyvalue(int i){
    printf("Pass by value in void function before change, Tuna is now %d\n", i);
    i = 99;
    printf("Pass by value in void function after change, Tuna is now %d\n", i);//value of variable changed in other/void function
    return;
}

void passbyreference(int *i){
    *i = 64;
    return;
}
