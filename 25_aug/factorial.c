#include<stdio.h>

void main(){
    int n, ans=1, y;
    printf("Enter the number to calculate the factorial for :");
    scanf("%d", &n);
    y=n;
    while(n > 1){
        ans = ans * n;
        n = n-1;
    }
    
    printf("The factorial of %d is %d ", y, ans);
}