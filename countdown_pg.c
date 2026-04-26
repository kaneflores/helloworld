#include <stdio.h>

int main(){
    int start;

    printf("How long is your countdown? \n");
    scanf("%d", &start);

    for(int i = start; i>=0; i--){
        printf("%d\n", i);
    }

    printf("You have gone from %d to 0\n", start);

    return 0;

}