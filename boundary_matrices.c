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
    printf("Boundary matrices is :\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(i==0||j==0||i==m-1||j==n-1){
                printf("%d ",a[i][j]);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    
    return 0;
}
