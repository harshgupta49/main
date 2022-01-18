#include <stdio.h>
int primefactors(int,int);
int main()
{
    int x,sum,i=2;
    printf("Enter a number : ");
    scanf("%d",&x);
    printf("Prime factors are : ");
    primefactors(x,i);
    return 0;
}
int primefactors(int n,int i){
    if(n==1){
        return 0;
    }
    if(n%i==0){
        printf("%d ",i);
        n=n/i;
        i=2;
    }
    else{
    i=i+1;
    }
    return primefactors(n,i);
}
