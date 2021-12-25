#include <stdio.h>
#include<math.h>
int main()
{
    int n,a[1000],c=0,d=0,i,b[1000],s=0,max;
    scanf("%d",&n);
    while(n>0){
        a[c++]=n%2;
        n=n/2;
    }
    for(i=c-1;i>=0;i--){
        if(a[i]==1){
            s++;
        }
        else{
            b[d++]=s;
            s=0;
        }
    }
    b[d++]=s;
    max=b[0];
    for(i=0;i<d;i++){
        if(b[i]>max){
            max=b[i];
        }
    }
    printf("%d",max);

    return 0;
}
