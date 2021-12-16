#include <stdio.h>

int main()
{
    int i,n,a[10000];
    scanf("%d",&n);
    if(n%2==0){
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++){
            if(i%2==0){
                printf("%d ",a[i+1]);
            }
            else{
                printf("%d ",a[i-1]);
            }
        }
    }
    else
    printf("Not even.");

    return 0;
}
