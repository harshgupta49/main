#include <stdio.h>

int main()
{
    int a[10][10],b[10][10],r,c,n,i,j,k=0;
    printf("Enter row and coloum of matrices=");
    scanf("%d %d",&r,&c);
    printf("Enter elements of first matrices:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter elements of second matrices:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(a[i][j]!=b[i][j]){
                k++;
            }
        }
    }
    if(k==0){
        printf("matrices are equal");
    }
    else{
        printf("matrices are not equal");
    }

    return 0;
}
