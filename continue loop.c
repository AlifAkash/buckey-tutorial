#include<stdio.h>
#include<stdlib.h>

int main(){

    int num = 1;

    do{
        if(num == 6 || num == 8){
            num++;
            continue;
        }
        printf("%d is avaliable\n", num);
        num++;
    }
    while(num <= 10);

    return 0;
}
