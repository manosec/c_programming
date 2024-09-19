#include<stdio.h>


void main(){
    int x,y=1;
    printf("Enter number that you need table for: ");
    scanf("%d", &x);
    while(y<11){
        printf("%d * %d = %d\n", x, y, (x*y));
        y++;
    }
}