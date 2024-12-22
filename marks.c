#include<stdio.h>
int main(){
    int marks[10] = {95,100,65,30,25,50,41,88,98,14};
    for(int i=0;i<10;i++){
        if(marks[i]<35) {
        printf("%d\n",i);
    }
    }
    return 0;

    

}