#include<stdio.h>
int main(){
    int n;
    printf("Enter the no.");
    scanf("%d",&n);
    int count=0;
    while(n!=0){
        
        n=n/10;
        count++;
    }
    printf("the no. of digits in no. are %d,count");
    return 0;
    }
