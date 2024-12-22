#include<stdio.h>
int main(){
    int a=1000;
    for(int i=1;a>=0;i++){
        printf("%d ",a);
        a=a-500;
    }
    return 0;
}