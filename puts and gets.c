#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

/*
    useful for instead of printf and scanf for string operations
*/

int main(){

    char catname[50];
    char catfood[25];
    char sentence[75] = "";

    puts("What is your cat dump name?"); // automatically adds one new line after print
    gets(catname);

    puts("What do your cat eats?");
    gets(catfood);

    strcat(sentence, catname);
    strcat(sentence, " loves to eat ");
    strcat(sentence, catfood);

    puts(sentence);

    return 0;
}
