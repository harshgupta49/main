#include <stdio.h>

int main()
{
    int m1,m2,m3;
    printf("Enter the numbers is three subject = ");
    scanf("%d %d %d",&m1,&m2,&m3);
    if(m1<m2&&m1<m3)
    printf("lowest = %d",m1);
    else if(m2<m1&&m2<m3)
    printf("lowest = %d",m2);
    else
    printf("lowest = %d",m3);

    return 0;
}
