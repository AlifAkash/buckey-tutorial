#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

int main(){

    int i;
    int players[5] = {50,10,7,15,99};
    int matchplayed[5] = {29,28,29,30,29};
    int goals[5] = {35,37,38,37,33};
    float ppg[5];
    float bestppg = 0.0;
    int bestplayer;
    int mp;
    int g;

    for(i=0;i<5;i++){
        ppg[i] = (float)goals[i] / (float)matchplayed[i];
        printf("player: %d\t match played: %d\t goal scored: %d\t point per game: %.2f\n", players[i], matchplayed[i], goals[i], ppg[i]);

        if(ppg[i] > bestppg){
                bestppg = ppg[i];
            bestplayer = players[i];
            mp = matchplayed[i];
            g = goals[i];
        }

    }

    printf("\nBest player is:%d  matchplayed:%d  goals:%d\n", bestplayer,mp,g);

    return 0;
}
