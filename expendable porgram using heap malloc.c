#include<stdio.h>
#include<stdlib.h>

int main(){

    int  i, howMany;
    int total = 0;
    float avarage = 0.0;
    int * pointerArray;

    printf("Enter how many number you want to average: ");
    scanf("%d", &howMany);

    pointerArray = (int *) malloc(howMany * sizeof(int));

    printf("\nEnter them hoss:\n");

    for(i=0; i<howMany; i++){
        scanf("%d", &pointerArray[i]);
        total += pointerArray[i];
    }

    avarage = (float)total/ (float)howMany;

    printf("\nYour avarage is: %.2f\n", avarage);

    return 0;
}
