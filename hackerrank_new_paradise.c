#include <stdio.h>

int main()
{
    int a[1000],i,n,max,x=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    for(i=0;i<n;i++){
        if(a[i]==max){
            x++;
        }
    }
    printf("%d",x);

    return 0;
}
