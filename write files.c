#include<stdio.h>
#include<stdlib.h>

int main(){

    FILE * fpointer;

    fpointer = fopen("becon.txt", "w");
    fprintf(fpointer, "I love cheese");

    fclose(fpointer);

    return 0;
}
