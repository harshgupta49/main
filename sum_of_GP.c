#include <stdio.h>

int main()
{
    int sum=0,i,a,n,r;
    printf("Enter the first number of G.P :");
    scanf("%d",&a);
    printf("Enter the nth term of the series :");
    scanf("%d",&n);
    printf("Enter the ratio(r) of the G.P :");
    scanf("%d",&r);
    printf("Series :");
    for(i=1;i<=n;i++){
        printf("%d ",a);
        sum=sum+a;
        a=a*r;
    }
    printf("\nSum of the series : %d",sum);

    return 0;
}
