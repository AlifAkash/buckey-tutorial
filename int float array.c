#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

int main(){

    int i;
    int meatball[5] = {7,9,43,21,50}; // int and fload array have no null array in last position or string terminator

    for(i=0; i<5; i++){
        printf("Elemant %d is value %d\n", i, meatball[i]);
    }

    return 0;
}
