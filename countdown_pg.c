#include <stdio.h>

int main(){
    int start;

    printf("How long is your countdown? \n");
    scanf("%d", &start);

    for(int i = start; i>=0; i--){
        printf("%d\n", i);
        Sleep(999.9);
    }

    printf("You have gone from %d to 0\n", start);

    return 0;

}