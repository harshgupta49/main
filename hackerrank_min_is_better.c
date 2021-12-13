#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,k,t,a[1000],b[1000],max,min,l=0;
    scanf("%d",&t);
    for(k=1;k<=t;k++){
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
        min=max;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(min>abs(a[j]-a[i])){
                    min=abs(a[j]-a[i]);
                }
            }
        }
        b[l]=min;
        l++;
    }
    for(i=0;i<l;i++){
        printf("%d\n",b[i]);
    }

    return 0;
}
