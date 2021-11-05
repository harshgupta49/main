#include <stdio.h>

int main()
{
    int num1,num2;
    printf("enter two numbers =");
    scanf("%d%d",&num1,&num2);
    switch(num1/num2){
        case 0:
        printf("%d is greater then %d",num2,num1);
        break;
        default:
        printf("%d is greater the %d",num1,num2);
    }
    
    
    return 0;
}
