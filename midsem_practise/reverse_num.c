#include<stdio.h>

void main(){
    int last_digit, n=123, result=0;
    while(n>0){
        last_digit = n % 10;
        result = result * 10 +last_digit;
        n = n/10;
    }
    printf("The reverse of n is %d", result);
}