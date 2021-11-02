#include <stdio.h>

int main()
{
    int d,y,m,w,a1,a2,a3,d1;
    printf("ENTER THE NUMBER OF DAYS=");
    scanf("%d",&d);
    y=d/365;
    a1=d%365;
    m=a1/30;
    a2=a1%30;
    w=a2/7;
    a3=a2%7;
    d1=a3;
    printf("year =%d month =%d weeks = %d days =%d",y,m,w,d1);
   
    return 0;
}
