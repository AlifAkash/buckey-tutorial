#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

int main(){

    int i;
    int meatball[5];
    int totalball=0;
    int avg = 0;

    for(i=0; i<5; i++){
        printf("How many meat ball you eat on day %d?\n", i+1);
        scanf("%d", &meatball[i]);
    }

    for(i=0; i<5; i++){
     totalball += meatball[i];
    }

    avg = totalball/5;

    printf("You ate an average of %d ball per day!!\n", avg);

    return 0;
}
