#include<stdio.h>
int sum(int n){
    if(n==0 || n==1) return 1;
    int recAns = n + sum(n-1);
    return recAns;
    
}

int main(){
    int n;
    printf("enter a no.");
    scanf("%d",&n);
    int sums = sum(n);
    printf("%d",sums);
    return 0;

}