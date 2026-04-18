#include <stdio.h>

int main(){
    // int x;
    // x = 50;

    // if (x == 5){
    //     printf("it is five\n");

    // }

    int velocity;

    printf("HOw fast were you driving?\n");
    scanf("%d", &velocity);
    
    if (velocity > 100){
        printf("You are driving too fast!\n");
    }
    
    else if(velocity>80){
        printf("YOu are driving appropriately\n");
    }

    else{ //catch-all
        printf("Okay. \n");
    }

    return -1;
}