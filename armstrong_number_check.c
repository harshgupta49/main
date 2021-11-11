#include <stdio.h>

int main()
{
    int num,i,r,sum=0,t;
    printf("Enter the number = ");
    scanf("%d",&num);
    t=num;
    while(num>0){
        r=num%10;
        sum=sum+r*r*r;
        num=num/10;
        }
    if(t==sum){
    printf("Number is an armstrong number");
    }
    else{
    printf("Number is not an armstrong number");
    }

    return 0;
}
