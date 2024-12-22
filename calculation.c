#include<stdio.h>
int main(){
    int a=2, b=6, c, d; //BODMAS ki trh isme multiply divide phle aur
                        // add sub baad m hote hai par inme se jo phle
    c = a/b*b;          //hota h vo calculate hota h
    d = a*b/a;
    printf("%d %d",c,d);
    return 0;

} 