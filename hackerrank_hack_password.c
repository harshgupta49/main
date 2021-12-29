#include <stdio.h>

int main()
{
    int i,j,n,t,a[10000],bo[10000],c=0,max,x=0;
    scanf("%d",&t);
    for(j=1;j<=t;j++){
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            if(a[i]>9){
                printf("incorrect");
                return 0;
            }
        }
        max=a[0];
        for(i=0;i<n;i++){
            if(a[i]>max)
            max=a[i];
        }
        max++;
        int b[10000]={0};
        for(i=0;i<n;i++){
            b[a[i]]++;
        }
        for(i=0;i<max;i++){
            if(b[i]>1)
            x++;
        }
        if(x==0){
            bo[c++]=1;
        }
        else
        bo[c++]=0;
        x=0;
    }
    for(i=0;i<t;i++){
        if(bo[i]==1){
            printf("correct\n");
        }
        else{
            printf("incorrect\n");
        }
    }

    return 0;
}
