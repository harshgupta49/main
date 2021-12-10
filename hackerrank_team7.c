#include <stdio.h>

int main()
{
    int n,a,b,c,i,z=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d %d",&a,&b,&c);
        if((a+b+c)>=2){
            z++;
        }
    }
    printf("%d",z);
    
    return 0;
}
