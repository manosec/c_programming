#include<stdio.h>


void main(){
    int x, ans = 0;
    printf("Enter the number to add: ");
    scanf("%d", &x);
    while(x){
        ans = ans + x;
        scanf("%d", &x);
    }
    printf("The sum of the entered numbers is: %d", ans);
    
}