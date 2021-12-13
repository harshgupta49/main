#include <stdio.h>
int main()
{
    int a[10000],b[10000],c[10000],d[10000],i,n,l,hcf=0;
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d %d",&a[i],&b[i]);
        }
        for(i=0;i<n;i++){
            for(l=2;l<=a[i]||l<=b[i];l++){
            if(a[i]%l==0&&b[i]%l==0)
            hcf=l;
            }
            if(hcf!=0){
                c[i]=a[i]/hcf;
                d[i]=b[i]/hcf;
            }
            else{
                c[i]=0;
                d[i]=0;
            }
            hcf=0;
        }
    for(i=0;i<n;i++){
        if(c[i]!=0)
        printf("%d %d\n",c[i],d[i]);
        else
        printf("Not Possible\n");
    }

    return 0;
}
