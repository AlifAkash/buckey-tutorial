#include<stdio.h>
#include<stdlib.h>

int main(){

    int rows, columns;

    for(rows=1; rows<=6; rows++){

        for(columns=1; columns<=4; columns++){
            printf("%d ", columns);
        }

        printf("\n");
    }

    return 0;
}
