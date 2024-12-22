#include<stdio.h>
int main(){
    int flag=1,n=6;
    int arr[6] = {1,2,3,3,2,1};
    for(int i=0;i<=n/2;i++){
        if(arr[i]!=arr[n-i-1]){
            flag=0;
            break;
        }
    }
    if(flag){
        printf("palandrome");
    }else{
        printf("not a palandrome");
    }
            return 0;
}
