#include<stdio.h>
int main(){
    int arr[2][2] = {1,2,3,4};
    int brr[2][2] = {5,6,7,8};
    for(int i=0;i<=1;i++){
        for(int j=0;j<=1;j++){
            int result[2][2] ;
            result[i][j] =  arr[i][j] + brr[i][j];
        
        printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
    }



        