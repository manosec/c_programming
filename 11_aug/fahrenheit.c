#include<stdio.h>

void main(){
    float c, f;
    printf("Enter the temperature in fahrenheit:\n");
    scanf("%f", &f);
    c = ((f-32)*5) / 9;
    printf("The conversion of temperature in fahrenheit %f in celsius is %f", f,c);
}