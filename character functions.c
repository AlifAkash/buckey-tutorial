#include<stdio.h>
#include<stdlib.h>
#include<ctype.h> //for testing functions for char

int main(){

    int tuna = '*';

    if(isalpha(tuna)){
        if(isupper(tuna)){
            printf("%c is a upper case letter\n", tuna);
        }
        else{
            printf("%c is a lower case letter\n", tuna);
        }
    }
    else if (isdigit(tuna)){
        printf("%c is a digit\n", tuna);
    }
    else {
        printf("%c is a OMF WTF is that\n", tuna);
    }

    return 0;
}
