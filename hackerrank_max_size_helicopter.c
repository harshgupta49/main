#include <stdio.h>

int main()
{
    int i,n,a[10000],b[10000],min[10000],c[10000],d[10000],l=0,max,y,t,j;
    scanf("%d",&t);
    for(j=1;j<=t;j++){
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d%d",&a[i],&b[i]);
        }
        for(i=0;i<n;i++){
            min[i]=a[i]<b[i]?a[i]:b[i];
        }
        max=min[0];
        y=0;
        for(i=0;i<n;i++){
            if(max<min[i]){
                max=min[i];
                y=i;
            }
        }
        c[l]=a[y];
        d[l]=b[y];
        l++;
    }
    for(i=0;i<l;i++){
        printf("%d %d\n",c[i],d[i]);
    }

    return 0;
}
