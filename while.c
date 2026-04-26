#include <stdio.h>

int main(){
    int x;
    // while, do, for (types of loops)


    // printf("Do you wish to quit? Press 1. \n");
    // scanf("%d", &x);

    // if (x ==1){
    //     return 0;
    // }
    //printf("testing you see this\n");
    while (1){ // repeats indefinitely / endless loop 1 is like an if statement, this keeps happening unless x is changed
        printf("Do you wish to quit? Press 1. \n");
        scanf("%d", &x);
        if (x ==1){
            return 0;
        }
    }

    return 0; // never reached, but used to end main function properly



}