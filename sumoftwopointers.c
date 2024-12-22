#include<stdio.h>
int sumofnumbers(int*a,int*b){  
    int result;
    result= *a + *b;   //sum result
    return result;

}
int main () {
    int a = 10;
    int b = 15;
    int *ptr1 = &a; //use of pointerss
    int *ptr2 = &b;
    int sum=sumofnumbers(ptr1,ptr2);  //sum using function
    printf("The sum is:%d\n",sum);   //printing the result
    return 0 ;
}