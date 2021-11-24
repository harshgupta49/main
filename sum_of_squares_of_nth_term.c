#include <stdio.h>

int main()
{
    int n,i,sum=0;
    printf("Enter the nth term :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d ",i*i);
        sum=sum+i*i;
    }
    printf("\nSUM=%d",sum);

    return 0;
}
