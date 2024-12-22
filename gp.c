#include<stdio.h>
int main(){
    int a; //a times loop chalega
    printf("enter a no.");
    scanf("%d",&a);
    int x=3;
    for( int i=1;i<=a;i++){ 
        printf("%d ",x);
        x=x*4;
    }


    
return 0;

}