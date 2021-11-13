#include <stdio.h>

int main()
{
    int d1,m1,y1,d2,m2,y2,d3,m3,y3,t1,t2,t3;
    printf("Enter the current date =");
    scanf("%d %d %d",&d1,&m1,&y1);
    printf("Enter your birthday date =");
    scanf("%d %d %d",&d2,&m2,&y2);
    t1=y1*365+m1*30+d1;
    t2=y2*365+m2*30+d2;
    t3=t1-t2;
    y3=t3/365;
    t3=t3%365;
    m3=t3/30;
    d3=t3%30;
    printf("Age years%d\nmonths=%d\ndays=%d",y3,m3,d3);
    
    

    return 0;
}
