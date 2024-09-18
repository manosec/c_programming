#include<stdio.h>
#include<math.h>

void main(){
    int a,b,c;
    float root, mul2, x1, x2;
    printf("Enter the value of square co-eff(a), co-eff(b) and constant(c):\n");
    scanf("%d%d%d", &a,&b,&c);
    root = sqrt((b*b) - 4*a*c);
    mul2 = 2*a;
    x1 = (-b+root) / mul2;

    // there is no solution if the root is negative
    // if (root < 0){
    //     printf("There is no solution");
    // }
    // else{
    x2 = (-b-root) / mul2;
    printf("The output of the qdratic equation is %f and %f", x1, x2);
}