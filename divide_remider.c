#include <stdio.h>

int main()
{
    int a,b,c,d;
    printf("enter the two digits\n");
    scanf("%d %d",&a,&b);
    c=a/b;
    printf("divide =%d\n",c);
    d=a%b;
    printf("reminder=%d",d);
    
    return 0;
}
