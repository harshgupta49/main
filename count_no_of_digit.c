#include <stdio.h>

int main()
{
    int num,i=1,t;
    printf("Enter the number =");
    scanf("%d",&num);
    t=num;
    while(num/10!=0){
        num=num/10;
        i++;
    }
    printf("Number of digits in %d is = %d",t,i);
    
    return 0;
}
