#include<stdio.h>

void main(){
    char ch;
    int x;
    printf("Enter the character:");
    scanf("%c", &ch);
    x=ch;
    printf("The ASCII value of %c is %d\n",ch,x);
    if(x>=48 && x<=57){
        printf("Entered character is a digit");
    }
    else{
        if ((x>=65 && x<=90) || (x>=97 && x<=122))
            printf("Entered character is an alphabet");
        else
            printf("Entered character is some other special characters");
    }
}