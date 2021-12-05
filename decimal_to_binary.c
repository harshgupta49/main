#include <stdio.h>

int main()
{
    int n,i,a,ans=0,p=1;
    printf("Enter the decimal number =");
    scanf("%d",&n);
    while(n>0){
        a=n%2;
        n=n/2;
        ans=ans+a*p;
        p=p*10;
    }
    printf("%d",ans);

    return 0;
}
