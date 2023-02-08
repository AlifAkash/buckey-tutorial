#include<stdio.h>
#include<stdlib.h>

int main(){

    FILE * fpointer;

    fpointer = fopen("becon.txt", "a");

    fprintf(fpointer, "\n- a hikewl by bucky roberts.");

    fclose(fpointer);

    return 0;
}
