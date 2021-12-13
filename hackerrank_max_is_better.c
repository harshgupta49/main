#include <stdio.h>
int main()
{
    int a[1000000],b[1000000],i,t,n,min,max,j,k=0;
    scanf("%d",&t);
    for(j=1;j<=t;j++){
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        min=a[0];
        max=a[0];
        for(i=0;i<n;i++){
            if(min>a[i]){
                min=a[i];
            }
            if(max<a[i]){
                max=a[i];
            }
        }
        b[k]=max-min;;
        k++;
    }
    for(i=0;i<t;i++){
        printf("%d\n",b[i]);
    }

    return 0;
}
