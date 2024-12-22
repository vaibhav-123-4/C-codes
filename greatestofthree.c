#include<stdio.h>
int main(){
    int number1,number2,number3,maximum;
    printf("Enter three numbers:");
    scanf("%d %d %d",&number1,&number2,&number3); //user input
    //assume that number1 is maximum
    maximum=number1;
    //compare with number2
    if( number2>maximum)
    maximum=number2;
    
    //compare with third number
    if( number3>maximum)
    maximum=number3;
    
    printf(" Maximum number is: %d\n",maximum);
    return 0;
}
/*output:

Enter three numbers:14
15 
16
 Maximum number is: 16*/



