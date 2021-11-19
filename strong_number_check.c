#include <stdio.h>

int main()
{
    int n,i,j,a,t,fac=1,sum=0;
    printf("Enter a number =");
    scanf("%d",&n);
    t=n;
    while(n>0){
        a=n%10;
        for(j=1;j<=a;j++){
            fac=fac*j;
        }
        sum=sum+fac;
        fac=1;
        n=n/10;
    }
    if(sum==t){
        printf("Number is a strong number");
    }
    else 
    printf("Number is not a strong number");

    return 0;
}
