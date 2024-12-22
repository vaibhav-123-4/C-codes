//program to find factorial of any given number
#include<stdio.h>
int main(){
    int i,fact=1,n;  //taking input variables
    printf(" enter a number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){  //for loop
        fact=fact*i;  //factorial of any number n is : n*(n-1)*(n-2).......1
    }
        printf("the factorial of %d is : %d",n,fact);
    
    return 0;

    }
    
    /*output
    enter a number:4
the factorial of 4 is : 24*/
