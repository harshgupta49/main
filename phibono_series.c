#include <stdio.h>

int main()
{
    int num,a=0,c=1,b,i=1;
    printf("Enter the nth term of the phibono series = ");
    scanf("%d",&num);
    while(i<=num){
       b=a;
       a=c;
       c=a+b;
       printf("%d ",b);
       i++;
    }

    return 0;
}
