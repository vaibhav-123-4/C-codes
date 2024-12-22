#include<stdio.h>
int add(int n){
    if(n==1) return 1;
    return n + add(n-1);
}


    


int main(){
    int n;
    printf(" enter a no.");
    scanf("%d",&n); //taking input
    int sum=add(n);  //function
    printf("the arithematic sum is: "); //printing result
    printf("%d",sum);
    return 0;


}
/*output:
 enter a no.5
the arithematic sum is: 15*/