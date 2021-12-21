#include <stdio.h>

int main()
{
    int a[10][10],r,c,i,j,temp;
    printf("Enter the number of row and column of matrices =");
    scanf("%d %d",&r,&c);
    if(r!=c){
        printf("swapping of diagonal not possible");
        return 0;
    }
    printf("Enter elements of matrices :\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(i==j){
                temp=a[i][j];
                a[i][j]=a[i][r-1-j];
                a[i][r-1-j]=temp;
            }
        }
    }
    printf("matrices after swapping diagonals=\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
