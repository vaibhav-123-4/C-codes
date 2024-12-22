#include<stdio.h>
int main(){
    int number1=0, number2=1, nextterm; //input variables
    printf("Fibonacci series upto 100 is:%d, %d,",number1,number2);
    nextterm= number1+number2; //next term in fibonacci series is sum of previous two
    while( nextterm<=100){ //using while loop to print series while keeping last term less than 100
        printf("%d, ",nextterm);
        number1=number2;
        number2= nextterm;
        nextterm= number1+number2;

    }
    return 0;
}
/*output:
Fibonacci series upto 100 is:0,1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89*/