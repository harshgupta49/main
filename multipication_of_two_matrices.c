#include <stdio.h>

int main()
{
    int a[10][10],b[10][10],c[10][10],r1,c1,r2,c2,n,i,j,k,sum=0;
    printf("Enter row and coloum of first matrices=");
    scanf("%d %d",&r1,&c1);
    printf("Enter elements :\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter row and coloum of second matrices=");
    scanf("%d %d",&r2,&c2);
    printf("Enter elements :\n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    if(c1!=r2){
        printf("multiplication not possible ");
        return 0;
    }
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            for(k=0;k<c2;k++){
                sum=sum+a[i][k]*b[k][j];
            }
            c[i][j]=sum;
            sum=0;
        }
    }
    printf("Resultant array :\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
