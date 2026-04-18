#include <stdio.h>

int main(){
    char name[16]; // 16 characters allocated to store a name;
    printf("Hello, World! \n");

    printf("Tell me your name... \n");
    scanf("%s", name); // read a string from the user and store it in the variable 'name'

    printf("Hello, %s! \n", name); 
    return -1;
}