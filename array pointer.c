#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int main(){

    int meatball[5] = {7, 5, 43, 54, 67};
    int i;

    printf("Element \t Address \t\t Value\n");
    for(i=0; i<5; i++){
        printf("Meatball[%d]\t %p\t %d\n", i, &meatball[i], meatball[i]);
    }

    // array are just pointer to the first elements
    printf("\nMeatball \t %p\n", meatball);
    //Dereference array
    printf("\n*Meatball \t %d\n", *meatball);
    printf("\n*(meatball+2)\t %d\n", *(meatball+2));


    return 0;
}
