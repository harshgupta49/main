#include <stdio.h>

int main()
{
    int i,n,a[10000],num,z=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&num);
    for(i=0;i<n;i++){
        if(num==a[i]){
            z++;
        }
    }
    if(z!=0){
        for(i=0;i<n;i++){
            if(a[i]!=num){
                printf("%d ",a[i]);
            }
        }
    }
    else{
        printf("Not found.");
    }

    return 0;
}
