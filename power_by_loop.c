#include<stdio.h>
int main(){
    int i,x,y,a=1;
    printf("Enter two digits exponent and power:");
    scanf("%d%d",&x,&y);
    for(i=1;i<=y;i++)
    a=a*x;
    printf("answer=%d", a);
    return 0;
}
