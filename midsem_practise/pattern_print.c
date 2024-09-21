#include<stdio.h>

void main(){
    int n;
    printf("Enter the number to print the pattern :");
    scanf("%d", &n);
    while(n!=0){
        for(int i=0; i<n; i++){
            printf("*");
        }
        printf("\n");
        n--;
    }
}