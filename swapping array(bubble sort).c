#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<string.h>

int main(){

    int i, temp, swapped;
    int howmany = 10;
    int goals[howmany];

    for(i=0; i<howmany; i++){
        goals[i]= (rand()%25)+1;
    }

    for(i=0; i<howmany; i++){
        printf("%d\n", goals[i]);
    }

    while(1){

        swapped = 0;

        for(i=0; i<howmany-1; i++){
            if(goals[i]>goals[i+1]){
                temp = goals[i];
                goals[i] = goals[i+1];
                goals[i+1] = temp;
                swapped = 1;
            }
        }

        if(swapped==0){
            break;
        }
    }

    printf("\nSorted list is\n");

    for(i=0; i<howmany; i++){
        printf("%d\n", goals[i]);
    }

    return 0;
}
