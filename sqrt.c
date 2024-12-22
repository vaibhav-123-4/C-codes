//program to find square root of any 3 to 4 digits number
#include<stdio.h>

// Introduce a math library

#include<math.h>

int main(){
    
    int n; //input variable
    
    
   
    printf("Enter a three or four digit number : "); //taking input
   
    scanf("%d",&n);

    // check wheater the number is less than three digits or more than four digits
    
    if(n<100) printf("The number have less than three digits");
   
    else if(n>9999) printf("The number have more than four digits");
   
    else{
    
    //using float datatype bcz square root can be decimal also
    //using sqrt function
    
    float squareroot = sqrt(n);
    
    //printing value of square root
    printf("The square root of %d is : %f",n,squareroot);
    }
    return 0;
}
/*output:
Enter a three or four digit number : 100
The square root of 100 is : 10.000000*/