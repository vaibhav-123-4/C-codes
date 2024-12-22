#include<stdio.h>
int main(){
    int arr[8] = {1,2,3,4,5,6,7,8};
    int totalpairs = 0;
    for(int i=0;i<=7;i++){
        for(int j=i+1;j<=7;j++){
           

            
            if(arr[i] + arr[j]  == 12){
                totalpairs++;
            }
        }
    }
    
    printf("%d\n",totalpairs);

return 0;
}  
            