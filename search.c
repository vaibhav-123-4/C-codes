#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[7] = {12,54,32,56,87,45,14};
    int x = 420;
    int idx;
    bool flag = false;
    for(int i=0;i<=6;i++){
        if(arr[i]==x){
            flag= true;
            idx = i;
            break;
        }
        if(flag==false){
            printf("%d is not present",x);
            break;
        }
        else printf("%d is present and its index is %d",x,idx);
    }
    return 0;
        }

        