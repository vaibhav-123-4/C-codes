#include<stdio.h>
int factorial(int n){  //function calling itself
    if(n==1 || n==0) return 1;  //base case

return n*factorial(n-1);  //factorial of n = n*factorial of (n-1)
}

int main(){
    int n;  //input variable
    printf("enter a number :");
    scanf("%d",&n);
    int fact = factorial(n);  //using function
    printf("The factorial of %d is : %d",n,fact);   //printing factorial of input number

    return 0;
}
/*
output:
enter a number :5
The factorial of 5 is : 120*/