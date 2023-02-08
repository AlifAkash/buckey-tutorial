#include<stdio.h>
#include<stdlib.h>

int calculatebonus(int yearsworked);

int main(){

    int buckybonus = calculatebonus(14);
    int emmabonus = calculatebonus(3);

    printf("Bucky gets $%d dollars\n", buckybonus);
    printf("Emma gets $%d dollars\n", emmabonus);

    printf("Bob gets $%d dollars\n", calculatebonus(11));
    printf("stefani gets $%d dollars\n", calculatebonus(6));
    return 0;
}

int calculatebonus(int yearsworked){

    int bonus = yearsworked * 250;

    if(yearsworked > 10){
        bonus += 1000;
    }

    return bonus;
}
