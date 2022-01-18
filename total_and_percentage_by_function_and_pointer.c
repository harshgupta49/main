#include <stdio.h>
void totper(int,int,int,int*,float*);
int main()
{
    int a,b,c,tot;
    float per;
    printf("Enter marks in first subject =");
    scanf("%d",&a);
    printf("Enter marks in second subject =");
    scanf("%d",&b);
    printf("Enter marks in third subject =");
    scanf("%d",&c);
    totper(a,b,c,&tot,&per);
    printf("Total marks = %d",tot);
    printf("Percentage = %f",per);

    return 0;
}
void totper(int a,int b,int c,int *tot,float *per){
    *tot=a+b+c;
    *per=*tot/3.0;
}
