#include <stdio.h>

int main()
{
    int i,j,k,n;
    printf("Enter a number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i+1;j++){
            printf(" ");
        }
        for(k=1;k<=n-i+1;k++){
            printf("*");
        }
        for(j=1;j<=4*i-3;j++){
            printf(" ");
        }
         for(k=1;k<=n-i+1;k++){
            printf("*");
        }    
        printf("\n");
    }
    for(i=n;i>=1;i--){
        for(j=1;j<=n-i+1;j++){
            printf(" ");
        }
        for(k=1;k<=n-i+1;k++){
            printf("*");
        }
        for(j=1;j<=4*i-3;j++){
            printf(" ");
        }
         for(k=1;k<=n-i+1;k++){
            printf("*");
        }    
        printf("\n");
    }

    return 0;
}
