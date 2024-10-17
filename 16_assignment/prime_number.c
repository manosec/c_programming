#include<stdio.h>

void main(){
    int n, status=1;
    printf("Enter the number to check ");
    scanf("%d", &n);
    for(int i=2; i < n; i++){
        if(n%i==0){
            // printf("Not a prime number");
            status = 0;
        }
    }
    if (status){
        printf("%d Number is prime",n);
    }
    else{
        printf("%d Not a Prime number",n);
    }
}