#include <stdio.h>

int main()
{
    int num,a=0,z=0,r=1,i=1,sum=0;
    printf("Enter the nth term of the phibono series for sum = ");
    scanf("%d",&num);
    while(i<=num){
        a=z;
        z=r;
        r=r+a;
        sum=sum+r;
        i++;
        printf("%d ",r);
    }
    printf("\nSUM = %d",sum);

    return 0;
}
