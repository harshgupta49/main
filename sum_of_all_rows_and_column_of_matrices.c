#include <stdio.h>

int main()
{
    int a[10][10],i,j,r,c,sum=0;
    printf("Enter number of rows and column =");
    scanf("%d %d",&r,&c);
    printf("Enter elements of matrices :\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            sum=sum+a[i][j];
        }
        printf("sum of row %d is = %d\n",i+1,sum);
        sum=0;
    }
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            sum=sum+a[j][i];
        }
        printf("sum of column %d is = %d\n",i+1,sum);
        sum=0;
    }
    
    

    return 0;
}
