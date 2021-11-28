#include <stdio.h>

int main()
{
    int i,j,k,c,n;
    printf("Enter no of rows =");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        k=64;
        c=i+k;
        k=n;
        for(j=1;j<=i;j++){
            printf("%c ",c);
            k--;
            c=c+k;
        }
        printf("\n");
    }

    return 0;
}
