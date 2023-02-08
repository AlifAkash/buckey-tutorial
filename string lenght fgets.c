#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int main(){

    char movie[20];
    char * pMovie = movie;

    //it will take only 20 character from user input
    fgets(pMovie, 20, stdin);
    puts(pMovie);

    return 0;
}
