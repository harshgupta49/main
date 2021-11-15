#include <stdio.h>

int main()
{
    int sum=0,i,a,n,d;
    printf("Enter the first number of A.P :");
    scanf("%d",&a);
    printf("Enter the nth term of the series :");
    scanf("%d",&n);
    printf("Enter the difference of the A.P :");
    scanf("%d",&d);
    printf("Series :");
    for(i=1;i<=n;i++){
        printf("%d ",a);
        sum=sum+a;
        a=a+d;
    }
    printf("\nSum of the series : %d",sum);

    return 0;
}
