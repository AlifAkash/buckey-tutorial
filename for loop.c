#include<stdio.h>
#include<stdlib.h>

int main(){

    int becon;
    int memory;

    int arry[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int loop;

    for(becon=1; becon<=10; becon++){
        printf("Becon is %d\n", becon);
    }

    for(memory=0; memory<=100; memory+=8){
        printf("Memory is %d\n", memory);
    }

    for(loop=0; loop<arry[loop]; loop++){
        int i = arry[loop];
        printf(" %d\n", i);
    }

    return 0;
}
