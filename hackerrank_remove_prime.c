#include <stdio.h>

int main()
{
    int n,i,j,a[100000],b[100000],p=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        for(j=2;j<a[i];j++){
            if(a[i]%j==0){
                p++;
            }
        }
        b[i]=p;
        p=0;
    }
    for(i=0;i<n;i++){
        if(b[i]!=0){
            printf("%d ",a[i]);
        }
    }
    

    return 0;
}
