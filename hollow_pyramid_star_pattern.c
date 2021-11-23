#include <stdio.h>

int main()
{
    int i,j,n,k;
    printf("Enter number of stars =");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(k=n-i;k>=1;k--){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            if(j==2*i-1||j==1||i==n){
                printf("*");
            }
            else
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}
