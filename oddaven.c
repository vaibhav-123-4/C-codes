#include<stdio.h>
int main(){
    int x;
    printf("Enter the number :");
    scanf("%d",&x);
    if(x%2==0){
        printf("Even number");
    }
    if(x%2!=0){
        printf("odd number");
    }
    return 0;

}