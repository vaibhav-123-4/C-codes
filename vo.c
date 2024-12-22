#include<stdio.h>
int main(){
    int add();
    int k=add(2,4);
    printf("%d",k);
}
int add(int a,int b){
       return a+b;
}