#include <stdio.h>
// %s a string of chars
// %d integer
int main(){
    int x, y, result;

    printf("Please input a number:\n");
    scanf("%d",&x);
    printf("Please input another number:\n");
    scanf("%d", &y);

    if (x != 6 && y != 7) {
        result = x + y;
        printf("The result is %d\n", result);
    }
    else{
        printf("67!!!!!!!!!!!!!!!\n");
    }
      
    


    return 0;
}