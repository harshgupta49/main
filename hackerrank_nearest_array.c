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
            break;
        }
    }
    if(z!=0){
        for(i=0;i<n;i++){
            if(a[i]==num&&i==0){
                printf("%d",a[i+1]);
                break;
            }
            else if(a[i]==num&&i==n-1){
                printf("%d",a[i-1]);
            }
            else if(a[i]==num){
                printf("%d\n%d",a[i-1],a[i+1]);
                break;
            }
        }
    }
    else{
        printf("Not found.");
    }

    return 0;
}
