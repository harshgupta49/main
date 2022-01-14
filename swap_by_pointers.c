#include <stdio.h>

int main()
{
    int a,b,*pa,*pb;
    printf("Enter the two numbers : ");
    scanf("%d %d",&a,&b);
    pa=&a;
    pb=&b;
    int temp;
    temp=*pa;
    *pa=*pb;
    *pb=temp;
    printf("Number after swap : %d %d",a,b);

    return 0;
}
