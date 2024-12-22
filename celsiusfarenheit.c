#include<stdio.h>
int main(){
    float celsius ,fahrenheit;  //input variables for temperatures
    printf(" enter the temperature in celsius:");
    scanf("%f", &celsius);
    fahrenheit= celsius*1.8 +32; //formula for converting degree celsius to fahrenheit
    printf("the temperature in fahrenheit is:%f ", fahrenheit);
    return 0;
}
/*output:
    enter the temperature in celsius:10
the temperature in fahrenheit is:50.000000*/