#include <stdio.h>

int main()
{
    int a[10][10],i,j,r,c,num;
    printf("Enter Number Of Rows And Column Of Matrices =");
    scanf("%d %d",&r,&c);
    printf("Enter elements of Matrices :\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter number for scaler multiplication =");
    scanf("%d",&num);
    printf("Resultant Matrices :\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",a[i][j]*num);
        }
        printf("\n");
    }
    

    return 0;
}
