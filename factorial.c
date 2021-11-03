#include<stdio.h>
int main(){
    int i,x,a=1;
    printf("Enter the factorial digit :");
    scanf("%d",&x);
    for(i=x;i>=1;i--)
    a=a*i;
    printf("answer=%d", a);
    return 0;
}
