#include<stdio.h>

void main(){
    int month;
    printf("Choose a month:");
    scanf("%d", &month);

    switch (month){
        case 1:
        printf("January");
        break;
        case 2:
        printf("February");
        break;
        case 3:
        printf("March");
        break;
        default:
        printf("Entered month is above march");
    }
}