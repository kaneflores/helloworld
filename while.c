#include <stdio.h>

int main(){
    int x;
    // while, do, for (types of loops)


    // printf("Do you wish to quit? Press 1. \n");
    // scanf("%d", &x);

    // if (x ==1){
    //     return 0;
    // }

    while (1){ // repeats indefinitely
        printf("Do you wish to quit? Press 1. \n");
        scanf("%d", &x);
        if (x ==1){
            return 0;
        }
    }

    return 0; // never reached, but used to end main function properly



}