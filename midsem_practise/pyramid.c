#include<stdio.h>

void main(){
    int num_of_line, tracker=1;
    printf("Enter the number of line to build pyramid: ");
    scanf("%d", &num_of_line);
    while(tracker <= num_of_line){
        int space_need = num_of_line-tracker;
        for(int i=1; i<=space_need; i++){
            printf(" ");
        }
        
        for(int i=1; i<= tracker; i++){
            printf(" @");
        }
        printf("\n");
        tracker++;
    }
}