#include<stdio.h>
#include<stdlib.h>

int main(){

    float avgProfit ;
    int pieceOfPumkin = 10;
    int sales = 59;
    int daysWorked = 7;

    avgProfit = (pieceOfPumkin * sales)/ daysWorked;
    printf("Average profit is : %.2f\n", avgProfit);

    avgProfit = ((float)pieceOfPumkin * (float)sales)/ (float)daysWorked; // temporary change the datatype not permanently.
    printf("Average profit is : %.2f\n", avgProfit);

    return 0;
}
