#include <stdio.h>

int main()
{
    int num,a=0,z=0,r=1,i=1;
    printf("Enter the nth term of the phibono series = ");
    scanf("%d",&num);
    while(i<=num){
        a=z;
        z=r;
        r=r+a;
        i++;
        printf("%d ",r);
    }

    return 0;
}
