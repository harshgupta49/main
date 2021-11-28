#include <stdio.h>
#include<math.h>
int main()
{
    int num,i,r,sum=0,t,x=0;
    printf("Enter the number = ");
    scanf("%d",&num);
    t=num;
    while(t>0){
        x++;
        t=t/10;
    }
    t=num;
    while(num>0){
        r=num%10;
        sum=sum+pow(r,x);
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
