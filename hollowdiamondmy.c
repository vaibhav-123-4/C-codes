#include<stdio.h>
int main(){
    int n;
    printf("enter the no of rows :");
    scanf("%d", &n);
    for( int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
    }
       int i; for(int j=1;j<=2*i-1;j++){
            if(i==1||j==1||j==2*i-1){
                printf("*");
            }
            else
                printf(" ");
            }
            printf("\n");
        
        for(int i=n-1;i>=1;i--){
            for(int j=1;j<=n-1;j++){
                printf(" ");
            }
            for(int j=1;j<2*i-1;j++){
                if(i==1||j==1||j==2*i-1){
                    printf("*");
                }
                else
                    printf(" ");

                }
                printf("\n");
               
                }
                 return 0;
                }
        