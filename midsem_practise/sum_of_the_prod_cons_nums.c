#include<stdio.h>

void main(){
    int arr[7] = {4,5,2,5,6,4,7}, ans = 0;
    for(int i=0;i<6;i++){
        ans = ans + arr[i] * arr[i+1];
    }
    printf("The sum of product of the consecutive terms is %d", ans);
    
}