#include <stdio.h>
int sumofdigits(int);
int main()
{
    int x,sum;
    printf("Enter a number : ");
    scanf("%d",&x);
    sum=sumofdigits(x);
    printf("Sum of digits : %d",sum);
    return 0;
}
int sumofdigits(int n){
    int r;
    if(n==0){
        return 0;
    }
    r=n%10;
    n=n/10;
    return r+sumofdigits(n);
}
