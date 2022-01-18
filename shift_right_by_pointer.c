#include <stdio.h>
void shiftright(int*,int*,int*);
int main()
{
    int a,b,c;
    printf("Enter three numbers : ");
    scanf("%d %d %d",&a,&b,&c);
    shiftright(&a,&b,&c);
    printf("After right shift: %d %d %d",a,b,c);

    return 0;
}
void shiftright(int *x,int *y,int *z){
    int temp;
    temp=*z;
    *z=*y;
    *y=*x;
    *x=temp;
}
