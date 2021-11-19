#include <stdio.h>

int main()
{
    int n,i,j,a,t,fac=1,sum=0;
    printf("Enter a number =");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        t=i;
        while(t>0){
            a=t%10;
            for(j=1;j<=a;j++){
                fac=fac*j;
            }
            sum=sum+fac;
            fac=1;
            t=t/10;
        }
        if(sum==i)
        printf("%d ",i);
        sum=0;
    }
      
    return 0;
}
