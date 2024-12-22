//Objective : Write the program to find the given Number as Prime Number or not

#include<stdio.h>
int main(){
    
    int n;  //input variable
    
    printf("Enter the number : "); //taking input
    scanf("%d",&n);
    if(n<0) printf("Number is not defined ");
    else{
    //introduce other variable with value = 0
    int a=0;
    //introduce a loop
    // if i=1 or n then the input is always divisible by some number thats why start loop with 2 and end at n-1
    for(int i=2;i<=n-1;i++){
        //if the number is divisible by any ohter number value of a=1
        if(n%i==0){
            a=1;
            
            break;  //break to end the loop
        }
    }
    //number is prime if it has no no other factor except 1 
      if(a==1) printf("%d is composite number ",n);
    
      else printf("%d is a prime number ",n);
    }
    return 0;
}

/*output:
Enter the number : 19
19 is a prime number */
/*Enter the number : 45
45 is composite number*/ 