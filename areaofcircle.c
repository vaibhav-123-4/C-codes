#include<stdio.h>
int main(){
    float r,pi,area,perimeter; //for taking input
    printf("Enter r= ");
    scanf("%f",&r);

    pi=3.14;
    area=pi*r*r;  //area of circle = pi*r*r

    perimeter=2*pi*r; //perimeter of circle 2*pi*r
   printf(" the area of the circle is: %f \n", area);
   printf( "the perimeter of the circle is: %f", perimeter );

return 0;
}
/*output:
Enter r= 10
 the area of the circle is: 314.000000
the perimeter of the circle is: 62.800003*/