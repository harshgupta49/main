#include <stdio.h>

int main()
{
    int num,i,a;
    printf("Enter the number =");
    scanf("%d",&num);
    for(i=1;i<=num-1;i++){
        if(num%i==0)
           a=i;
    }
         if(a!=1)
            printf("number if not prime factor");
            else
            printf(" prime number");

    return 0;
}
