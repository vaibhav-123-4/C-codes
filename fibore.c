#include<stdio.h>
int fibo(int n){     //function calling itself
    if( n==1 || n==2) return 1;  //base case
    return fibo(n-1) + fibo(n-2);  //nth number in fibonacci series is sum of previous two
}

int main(){
    int n;   //input variable
    printf("enter the no. ");
    scanf("%d",&n);
    int x = fibo(n);
    printf("The %dth fibonacci number is %d",n,x);  //printing result
    return 0;
}

 /* output:
  enter the no. 7
The 7th fibonacci number is 13*/