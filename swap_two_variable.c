#include <stdio.h>

int main()
{   int a,b,c; 
printf("enter value of a and b\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    a=c-a; 
    printf("%d,",a);
    b=c-b;
    printf("%d",b);
}
