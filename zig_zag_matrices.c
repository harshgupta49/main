#include <stdio.h>

int main()
{
    int a[10][10],i,j,m,n;
    printf("Enter number of rows and column of matrices =");
    scanf("%d %d",&m,&n);
    printf("Enter elements of matrices :\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("ZIG ZAG MATRICES IS :\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(i%2==0)
            printf("%d ",a[i][j]);
            else
            printf("%d ",a[i][n-1-j]);
        }
        printf("\n");
    }
    
    return 0;
}
