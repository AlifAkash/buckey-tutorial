#include<stdio.h>
#include<stdlib.h>
#include<ctype.h> //for testing functions for char
#include<string.h>
#include<stdbool.h>

bool verifyPassword(char *password);

int main(){

    char password[10];

    printf("Enter your password (max 10 character/digit) : ");
    scanf("%s", password);

    int lenght = strlen(password);
    printf("%d\n", lenght);

    if(lenght < 8){
        printf("please enter a password minimum 8 digit/character!!\a\n");

    }

    bool result = verifyPassword(password);

    if(result){
        printf("Your password is strong\n");
    }

    else{
        printf("Your result is false\n");
    }

    return 0;
}


bool verifyPassword(char *password){

    int lenght = strlen(password);

    bool has_upper = false;
    bool has_lower = false;
    bool has_digit = false;
    bool has_punct = false;

    for(int i=0; i<lenght; i++){ //error
            if(isupper(password[i])) has_upper = true;
            if(islower(password[i])) has_lower = true;
            if(isdigit(password[i])) has_digit = true;
            if(ispunct(password[i])) has_punct = true;
    }

    if(!has_upper) return false;
    if(!has_lower) return false;
    if(!has_digit) return false;
    if(!has_punct) return false;

    return true;
}
