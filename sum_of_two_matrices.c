#include <stdio.h>

int main()
{
    int a[10][10],b[10][10],i,j,r,c;
    printf("Enter Number Of Rows And Column Of Matrices =");
    scanf("%d %d",&r,&c);
    printf("Enter elements of first Matrices :\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter elements of second Matrices :\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("Resultant Matrices :\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
