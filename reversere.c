#include<stdio.h>
int reverse(int num);
int main(){
    int num,reversed;  //user input
    printf("Enter the number to be reversed: ");
    scanf("%d",&num);
    reversed = reverse(num);  //use of functions
    printf("The reverse of %d is: %d\n",num,reversed);
    return 0;
}
int reverse(int num){   //calling of function 
    static int reversed = 0;  
    if(num == 0) return reversed;  //base case
    reversed = reversed*10 + num%10;  //condition to reverse the number
    return reverse(num/10);
}

/*output:
Enter the number to be reversed: 12345
The reverse of 12345 is: 54321*/
