#include<stdio.h>


void main(){
    int temp;
    printf("\nEnter the temp value:\n");
    scanf("%d", &temp);
    if(temp > 100)
        printf("Inside If condition");
        printf("inside if but outside the brackets\n");
    //Every non-zero value is consider to be true
    if(13){
        printf("inside if\n");
    }
    int x=3;
    if(x=30){
        printf("inside if %d x\n", x);
    }
}