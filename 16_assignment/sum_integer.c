#include<stdio.h>

void main(){
    int n, check, result=0, sum=0;
    printf("Enter the number of n ");
    scanf("%d", &n);
    if (n>=1 && n<=6){
        check = n;
        while(check > 0){
            result = result *10 + n;
            sum += result;
            check--;
        }
    }
    printf("The sum of integer is %d", sum);
}