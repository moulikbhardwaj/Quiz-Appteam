#include <stdio.h>

int main(){
    int a,b,c,d,e,res = 1;
    printf("Enter a:\n");
    scanf("%d", &a);
    printf("Enter b:\n");
    scanf("%d", &b);
    printf("Enter c:\n");
    scanf("%d", &c);
    printf("Enter d:\n");
    scanf("%d", &d);
    printf("Enter e:\n");
    scanf("%d", &e);
    res = a*b*c*d*e;
    printf("The result is %d", res);
}