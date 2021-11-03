#include <stdio.h>

int main()
{
    int a,tt,a1,fh,a2,th,a3,oh,a4,f,a5,t,a6,fi,o;
    printf("enter the amount = ");
    scanf("%d",&a);
    tt=a/2000;
    a1=a%2000;
    fh=a1/500;
    a2=a1%500;
    th=a2/200;
    a3=a2%200;
    oh=a3/100;
    a4=a3%100;
    f=a4/50;
    a5=a4%50;
    t=a5/10;
    a6=a5%10;
    fi=a6/5;
    o=a6%5;
    printf("2000 notes = %d\n500 notes = %d\n200 notes = %d\n100 notes = %d\n50 notes = %d\n10 notes = %d\n5 notes =%d\n1 coins= %d",tt,fh,th,oh,f,t,fi,o);

    return 0;
}
