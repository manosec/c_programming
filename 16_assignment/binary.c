#include<stdio.h>

void main(){
    int n, binary[32];
    printf("Enter the number to convert into binary ");
    scanf("%d", &n);
    int i = 0;
    while (n!=0){
        binary[i] = n%2;
        n = n/2;
        i++;
    }
    printf("The binary representaion is ");
    for(int j=i-1; j >= 0;j--){
        printf("%d", binary[j]);
    }
    printf("\n");
}