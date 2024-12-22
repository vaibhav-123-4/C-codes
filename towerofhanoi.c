#include<stdio.h>
//introduction of void function
void tower(int n,char s,char h,char d){
    //Apply the base case
    if(n==0) return;
    //Calling the function inside the function
    tower(n-1,s,d,h);
    //Print the output
    printf("%c --> %c\n",s,d);
    //Again call the function
    tower(n-1,h,s,d);
    return;

}
int main(){
    //Taking the input of disk
    int n;
    printf("Enter the number of disk: ");
    scanf("%d",&n);
    //calling the function
    tower(n,'a','b','c');
    return 0;
}

/*
output :
Enter the number of disk: 3
a --> c
a --> b
c --> b
a --> c
b --> a
b --> c
a --> c
*/