#include<stdio.h>
int main(){
    int a=1189,b=841,x,i;
    for(i=0;i<9;i++){
    printf("\nA%d=%d,%d",i,a,b);
    x=a;
    a=b;
    b=x/2;}
}
