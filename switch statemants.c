#include<stdio.h>
#include<stdlib.h>

int main(){

    char grade = 'b';

    switch(grade){
        case 'a' :  printf("Sweet\n");
                    break;
        case 'b' :  printf("You din't work hard\n");
                    break;
        case 'c' :  printf("I see you din't study\n");
                    break;
        case 'd' :  printf("You love the D\n");
                    break;
        case 'f' :  printf("That's embarrassing\n");
                    break;
        default  :  printf("That doesn't even make sense\n");
    }

    return 0;
}
