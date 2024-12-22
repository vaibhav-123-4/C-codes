#include<stdio.h>
int main () {
    int arr[5] = {1,2,3,4,5};
    int *ptr;
    ptr = arr;
    printf("first element is %d\n",*ptr);
    printf("second element is %d\n",*(ptr+1));
    printf("third element is %d\n",*(ptr+2));
    
    return 0 ;
}