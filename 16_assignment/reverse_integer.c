#include<stdio.h>

void main(){
    int n, rev=0, last_digit;
    printf("Enter the number to reverse: ");
    scanf("%d", &n);
    // printf("%d", );
    while(n != 0){
        last_digit = n % 10;
        rev = rev * 10 + last_digit;
        n = n / 10;
    }
    printf("The reversed number is %d", rev);
}