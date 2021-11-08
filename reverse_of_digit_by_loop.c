#include <stdio.h>

int main()
{
    int num,rev=0,r,i,t;
    printf("Enter the number =");
    scanf("%d",&num);
    t=num;
    while(num!=0){
        r=num%10;
        rev=rev*10+r;
        num=num/10;
    }
    printf("reverse of %d is %d",t,rev);

    return 0;
}
