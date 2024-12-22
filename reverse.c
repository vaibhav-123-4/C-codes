#include<stdio.h>
int main(){
    int number,reversed=0, remainder; //input variables
    printf( " Enter the number to be reversed:"); //input from user for number to be reversed
    scanf("%d",&number);
    while(number!=0){
        remainder= number%10;  //to extract last digit of number to be reversed
        reversed=reversed*10+remainder; 
        number/=10;
    }
    printf("Reversed number: %d\n",reversed); //reversed number output
    return 0;

} 
/*output:
Enter the number to be reversed:58796
Reversed number: 69785*/