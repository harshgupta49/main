#include <stdio.h>

int main()
{
    int a[10][10],i,j,r,c,sum=0;
    printf("Enter number of rows and column =");
    scanf("%d %d",&r,&c);
    if(r!=c){
        printf("Diagonal not possible");
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
                sum=sum+a[i][j];
            }
        }
    }
    printf("sum of main diagonal is %d",sum);

    return 0;
}
