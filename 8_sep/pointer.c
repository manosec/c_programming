#include<stdio.h>

void main(){
    int x=5;
    int* y;
    y=&x;
    printf("The value of x %d\n", x);
    printf("The memory address of x %u\n", &x);
    printf("The value of y %u\n", y);
    printf("The memory address of y %u\n", &y);
    printf("The pointer value of y %d\n", *y);
}