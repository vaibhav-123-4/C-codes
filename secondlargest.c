#include<stdio.h>
#include<limits.h>
int main(){
    // int arr[7] = {1,2,3,4,5,6,7};
    int arr[5] = {5,4,3,2,1};
    int max=INT_MIN;
    int smax=INT_MIN;
    for(int i=0;i<=4 ;i++){
        if(max<arr[i]){
            smax = max;   //finding smax without using second loop
            max = arr[i]; //yha tak sirf tabhi tak work krega jab incresing order me elements de rkhe ho
        }

        else if(smax<arr[i] && max !=arr[i]){ //ye condn kaise bhi sequence ka smax nikal degi
            smax = arr[i];
        }
        }
    
    // for(int i=0;i<=6;i++){
    //     if(arr[i]!=max && smax<arr[i]){
    //         smax=arr[i];
    //     }
        
        
    
        printf("%d",smax);
    return 0;
        }
    