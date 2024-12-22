#include<stdio.h>
int main(){
    int n;
    printf("enter the no of rows :");
    scanf("%d",&n);
    int m;
    printf("enter the no of columns :");
    scanf("%d",&m);
    int arr[n][m];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    int sum = 0;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            sum= sum+arr[n][m];
        }
    }
    printf("the sum of given matrix is: %d",sum);
    
    return 0;
        }
    