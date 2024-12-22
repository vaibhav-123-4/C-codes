#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows : "); //taking input
    scanf("%d",&n);
    printf("Isoceles Triangle\n");  //program to print isosceles triangle
    int nsp = n-1;  //nsp = number of spaces
    int nst = 1;  //nst = number of stars
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");  //printing spaces
        }
        for(int k=1;k<=nst;k++){
            printf("*");  //printing stars
            
            
        }
        nsp=nsp-1;
         nst=nst+2;
        printf("\n");
    }
    printf("Hollow Right Triangle\n");  //program to print hollow right triangle
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(j==i || j==1 || i==n){
                printf("*");
            }
            else printf(" ");
        }
        printf("\n");
    }
   // n = (n/2)*2+1;
    int mid = n/2 + 1;
    printf("Hollow Diamond\n");  //program to print hollow diamond
    for (int i = 1; i <= (n+1)/2 ; i++){
        
        for ( int j = 1 ; j <= n; j++)
        {
            if ((j== mid+i-1 )||(j == mid -i +1))
            {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    for (int i = (n+1)/2 + 1; i <= n ; i++){
        int k = n - i + 1;
        for ( int j = 1 ; j <= n; j++)
        {
            if ((j== mid+k-1 )||(j == mid -k +1))
            {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
//output
// Enter the number of rows : 7
// Isoceles Triangle
//       *
//      ***
//     *****
//    *******
//   *********
//  ***********
// *************
// Hollow Right Triangle
// *
// **
// * *
// *  *
// *   *
// *    *
// *******
// Hollow Diamond
//    *   
//   * *
//  *   *
// *     *
//  *   *
//   * *
//    *