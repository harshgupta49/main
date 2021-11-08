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
    printf("reverse of %d is %d\n",t,rev);
    if(rev==t)
    printf("Number is Palindrome");
    else
    printf("Number is not palindrome");

    return 0;
}
