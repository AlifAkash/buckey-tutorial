#include<stdio.h>
#include<stdlib.h>

void printsomthing();

int warts = 23;

int main(){

    int pen = 5;

    printf("I have %d pens.\n", pen);

    printf("I have %d warts.\n", warts);

    printsomthing();

    return 0;
}

void printsomthing(){
    printf("I have %d warts.\n", warts);
    return;
}
