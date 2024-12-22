#include<stdio.h>
int main(){
    int n;
    printf("enter the no of rows:");
    scanf("%d",&n);
    n=((n+1)/2 ) + 1;
    int mid= (n/2) + 1;

    for( int i=1;i<=(n/2)+1;i++){
        for(int j=1;j<=n;j++){
            if(j==mid+(i-1) || j==mid-(i-1)){
                printf("*");
            }
            else printf(" ");
        }
        printf("\n");
       
    }
    for(int i=(n+1)/2;i<=n;i++){
        int k=n-i+1;
        for(int j=1;j<=n;j++){
            if(j==mid+(k-1) || j==mid-(k-1)){
                printf("*");
            } else printf(" ");
        }
        printf("\n");
    }


    return 0;
}
                    
                