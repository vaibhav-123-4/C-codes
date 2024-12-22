#include<stdio.h>
int main(){
    int a,b;
    printf("the dividend is");
    scanf("%d",&a);
    printf("the divisor is");
    scanf("%d",&b);
    int q=a/b;
    int r= a-(b*q);
    printf("the remainder when %d is divided by %d is %d", a,b,r);
    return 0;

}