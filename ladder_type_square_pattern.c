#include <stdio.h>

int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(j=n;j>=1;j--){
            if(i<=j)
            printf("%d ",j);
            else
            printf("%d ",i);
        }
        for(k=2;k<=n;k++){
            if(k>=i)
            printf("%d ",k);
            else
            printf("%d ",i);
        }
        printf("\n");
    }
    for(i=2;i<=n;i++){
        for(j=n;j>=1;j--){
            if(i<=j)
            printf("%d ",j);
            else
            printf("%d ",i);
        }
        for(k=2;k<=n;k++){
            if(i<=k)
            printf("%d ",k);
            else
            printf("%d ",i);
        }
        printf("\n");
    }

    return 0;
}
