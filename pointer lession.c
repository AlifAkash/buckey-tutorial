#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int main(){

    int tuna = 19;
    int salmon = 15;
    int * pTuna = &tuna; //pTuna is a pointer variable which hold the address of other variable

    printf("Address\t\t\t Name\t value\n");
    printf("%p\t %s\t %d\n",&tuna, "tuna", tuna);
    printf("%p\t %s\t %p\n",&pTuna, "pTuna", pTuna);
    printf("%p\t %s\t %d\n",&salmon, "salmon", salmon);

    return 0;
}
