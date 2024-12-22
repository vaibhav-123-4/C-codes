#include<stdio.h>
int main(){
    float x;
    printf("no. of terms in GP ");
    scanf("%f", &x);
    float a=100.98;

    for(int i=1; i<=x;i++){
        printf("%d\n",(int)a);
        a =a/2;
    }
    return 0;
}  