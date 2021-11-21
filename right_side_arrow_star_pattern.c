#include <stdio.h>

int main()
{
    int i,j,k,n;
    printf("Enter a number =");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=2*i-1;j++){
            printf(" ");
        }
        for(k=n-i+1;k>=1;k--){
            printf("*");
        }
        printf("\n");
    }
    for(i=n;i>=1;i--){
        for(j=1;j<=2*i-1;j++){
            printf(" ");
        }
        for(k=n-i+1;k>=1;k--){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
