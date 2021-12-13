#include <stdio.h>
int main()
{
    int a[100],b[100],i,t,n,min,max,max2,j,k=0;
    scanf("%d",&t);
    for(j=1;j<=t;j++){
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        min=a[0];
        for(i=0;i<n;i++){
            if(min>a[i]){
                min=a[i];
            }
        }
        max=min;
        max2=min;
        for(i=0;i<n;i++){
            if(max<a[i]){
                max2=max;
                max=a[i];
            }
            else if(max2<a[i]){
                max2=a[i];
            }
        }
        b[k]=max*max2;
        k++;
    }
    for(i=0;i<t;i++){
        printf("%d\n",b[i]);
    }

    return 0;
}
