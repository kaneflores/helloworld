/* float.c */
/*float
// double 
// %s for strings, %d for integers, %f for floats,



*/ 

#include <stdio.h>

int main(){
    // // area
    // // PI * r^2
    // float radius, pi = 3.14159, area;

    // printf("What is the radius in cm? \n");
    // scanf("%f", &radius);

    // area = radius * radius * pi;
    // printf("The area of the circle is  %f cm\n", area);
    // return 0;
    float base, height, area;

    printf("What is the base of the triangle in cm?\n");
    scanf("%f", &base);
    printf("What's the height of the triangle in cm? \n");
    scanf("%f", &height);

    area = base * height * 0.5;

    printf("The area of the triangle is %f cm\n", area);

    return -1
}