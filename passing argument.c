#include<stdio.h>
#include<stdlib.h>

void convertTodollar(float euro);

int main(){

    float europrice1 = 1.0;
    float europrice2 = 5.50;

    convertTodollar(europrice1);
    convertTodollar(europrice2);
    convertTodollar(21.65);

    return 0;
}

void convertTodollar(float euro){
    float usd = euro * 1.37;
    printf("%.2f euro = %.2f dollar\n", euro, usd);
    return;
}
