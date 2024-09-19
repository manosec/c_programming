#include<stdio.h>


void main(){
    int x, status = 1;
    printf("Enter a number to check whether it is prime: ");
    scanf("%d", &x);
    for(int i=2; i< x; i++){
        if(x%i==0){
            printf("Not a prime number..");
            status = 0;
        }
    }
    if (status)
    printf("It is prime number");
}