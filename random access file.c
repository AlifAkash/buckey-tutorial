#include<stdio.h>
#include<stdlib.h>

int main(){

    FILE * fpointer;

    fpointer = fopen("pumpkin.txt", "w+");
    fputs("I eat 3 pumpkins today.", fpointer);

    fseek(fpointer, 7, SEEK_SET);
    fputs(" munchkin on friday", fpointer);

    fseek(fpointer, -6, SEEK_END);
    fputs("top of the mountains.", fpointer);

    fclose(fpointer);

    return 0;
}
