#include<stdio.h>

void main(){
    int n, y,ans=1;
    printf("Enter the number to calc factorial:");
    scanf("%d", &n);
    y=n;
    while(n > 1){
        ans = ans * n;
        n--;
    }
    printf("Factorial of %d is %d", y, ans);
}