#include<stdio.h>
int prime(int n){
    int i,c=0;
    for(i=1;i<=n;i++){
        if(n%i==0)
        c++;
    }
        if(c==2)
        return 1;
        else
        return 0;
}
int palindrome(int n){
    int a,rev=0,t;
    t=n;
    while(n>0)
    {
        a=n%10;
        rev=rev*10+a;
        n=n/10;
    }
    if(t==rev)
    return 1;
    else 
    return 0;
}
int main()
{
    int n,i;
    printf("Enter a number :");
    scanf("%d",&n);
    for(i=n+1;;i++){
        if(prime(i)&&palindrome(i)){
        printf("%d",i);
        break;
        }
    }
    
    return 0;
}
