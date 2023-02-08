#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int main(){

    char movie1[] = "The return of Bucky.!!";
    char * movie2 = "My name is bucky I love ham.!!";

    //movie1 is constant hardly can change by strcpy/accecing each element. but not easly changeble
    puts(movie1);
    /*
    movie2 is changeble it is not constant,
    pointers just hold the address of array/string
    */
    puts(movie2);

    movie2 = "Hey new movie.!!";
    puts(movie2);

    return 0;
}
