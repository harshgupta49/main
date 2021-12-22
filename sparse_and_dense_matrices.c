#include <stdio.h>

int main()
{
    int a[10][10],i,j,m,n,x=0,y=0;
    printf("Enter number of rows and column of matrices =");
    scanf("%d %d",&m,&n);
    printf("Enter elements of matrices :\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
            if(a[i][j]==0){
                x++;
            }
            else{
                y++;
            }
        }
    }
    if(x>y){
        printf("MATRIX IS  SPARSE MATRIX");
    }
    else if(y>x){
        printf("MATRIX IS  DENSE MATRIX");
    }
    else{
        printf("MATRIX IS NEITHER SPARSE NOR DENSE MATRIX");
    }
    
    return 0;
}
