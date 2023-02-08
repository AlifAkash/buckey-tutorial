#include<stdio.h>
#include<stdlib.h>

int main(){

    int a, howMany, maxAmount;

    printf("How many times you want this loop to loop? (up to 10): ");
    scanf("%d", &howMany);

    for(a=1; a<=maxAmount; a++){
        printf("%d\n", a);
        if(a == howMany){
            break;
        }
    }

    return 0;
}
