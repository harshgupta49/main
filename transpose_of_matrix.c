#include <stdio.h>

int main()
{
    int a[10][10],b[10][10],r,c,i,j,sum=0;
    printf("Enter the number of row and column of matrices =");
    scanf("%d %d",&r,&c);
    printf("Enter elements of matrices :\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
            b[j][i]=a[i][j];
            }
        }
    printf("Transpose of that matrices :\n");    
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
