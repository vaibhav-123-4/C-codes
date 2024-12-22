#include<stdio.h>
int main(){
    int a;
    printf("year no. :");  //input for year number
    scanf("%d",&a);
    if(a%4==0){  //if year number is divisible by 4 completely then it is a leap year
        printf("leap year");
    }
    else{ 
        printf("not a leap year"); //if year number not divisible by 4 then it is not a leap year
    }
return 0;
}
/*output:
year no. :2020
leap year*/