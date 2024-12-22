


    

#include<limits.h>
#include<stdio.h>
int *max_min(int *arr);
int main(){
    int size=6;
    int arr[size];
    printf("Enter 6 values for array : ");
    for(int i=0;i<size;++i){
        scanf("%d",&arr[i]);
    }
    printf("\n");
    //max and min value
    int *xarr=arr,max=INT_MIN,min=INT_MAX;
    float avg=0;
    for(int i=0;i<6;++i){
        if(*xarr>max)
        max=*xarr;
        if(*xarr<min)
        min=*xarr;
        avg+=*xarr;
        xarr++;
    }
    
    avg/=6;
    printf("max = %d\nmin = %d\naverage = %f",max,min,avg);
    return 0;
}




/*output :
Enter 6 values for the array: 2
4
6
8
10
12

Max Value = 12
Min Value = 2
Average = 7.00*/