#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the first angle of the triangle =");
    scanf("%d",&a);
    printf("Enter the second angle of the triangle =");
    scanf("%d",&b);
    c=180-a-b;
    printf("the third angle of the triangle =%d",c);

    return 0;
}
