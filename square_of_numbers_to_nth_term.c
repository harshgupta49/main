#include <stdio.h>

int main()
{
    int n,i;
    printf("Enter the nth term :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d ",i*i);
    }

    return 0;
}
