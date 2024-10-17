#include<stdio.h>

void main(){
    int n, difference=0, count=0;
    printf("Enter the line to print the pattern: ");
    scanf("%d", &n);
    int main_loop = n;
    while(main_loop != count){
        
        for(int k=0; k<count; k++){
            printf("-");
        }

        for(int i=0; i< n;i++){
            printf("*");
        }
        printf("\n");
        n--;
        count++;
    }
}