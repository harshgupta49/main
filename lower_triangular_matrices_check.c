#include <stdio.h>

int main()
{
    int a[10][10],r,c,i,j,t=0;
    printf("Enter the number of row and column of matrices =");
    scanf("%d %d",&r,&c);
    if(r!=c){
        printf("Lower triangle not possible");
        return 0;
    }
    printf("Enter elements of matrices :\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
            if(i<j){
                if(a[i][j]!=0){
                    t++;
                }
            }
        }
    }
    if(t==0){
        printf("MATRICES IS A LOWER TRIANGULAR MATRICES");
    }
    else
    printf("MATRICES IS NOT LOWER TRIANGULAR MATRICES");

    return 0;
}
