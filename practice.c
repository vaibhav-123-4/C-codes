#include<stdio.h>
void f3(int*);
int main(){
    int i=10,*p=&i;
    f3(p++);
}
void f3(int*p)
{
    printf("%d\n",*p);
    return 0;
}
