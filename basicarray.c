#include<stdio.h>
int main(){
    int arr[5] ;
    for( int i=0;i<=4;i++){
        printf("enter element number %d : ", i+1);
        scanf("%d", &arr[i]);

    }
    //for( int i=4;i>=0;i--){
        for(int i=0;i<=4;i++){
        printf("%d\n", arr[i]);
    }
    return 0;
} 