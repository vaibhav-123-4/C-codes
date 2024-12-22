#include<stdio.h>
int main(){
    int x,y; //variables
    printf("Enter the values of x and y");
    scanf("%d %d", &x,&y); //user input of two numbers
    //swapping the values of x and y
    x=x+y;
    y=x-y;
    x=x-y;
    printf("x=%d and y=%d",x,y); //printing the swapped values of x and y
    return 0;

}
/*output:
Enter the values of x and y15
14
x=14 and y=15*/