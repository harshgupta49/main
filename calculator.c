#include<stdio.h>
int main()
{
    float num1;
    float num2;
    int op;
    float result;
    printf("Enter the first number= \n");
    scanf("%f",&num1);
    printf("(for subtract press 1\nfor add press 2\nfor multiply press 3\nfor divide press 4)\n\n");
    printf("Enter the operation =");
    scanf("%d",&op);
    printf("Enter the second number =");
    scanf("%f",&num2);
    switch(op)
    {
        case 1:{
        result=num1-num2;
        printf("Sub = %f", result);}
        break;
        
        case 2:
        result=num1+num2;
        printf("Add = %f", result);
        break;
        
        case 3:
        result=num1*num2;
        printf("Mul = %f", result);
        break;
        
        case 4:
        result=num1/num2;
        printf("Dev = %f", result);
        break;
        
        default:
        printf("This operation is not valid");
        
        return 0;
    }   
}
