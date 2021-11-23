#include <stdio.h>

int main()
{
    int a,b; float c,d;
    printf("Enter two integers =");
    scanf("%d %d",&a,&b);
    printf("Enter two float value");
    scanf("%f %f",&c,&d);
    printf("%d %d\n",a+b,a-b);
    printf("%.1f %.1f",c+d,c-d);

    return 0;
}
