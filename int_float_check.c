#include <stdio.h>
int main() 
{
    float num,diffrence;
    int a;
    printf("Enter a number :");
    scanf("%f",&num);
    a=num;
    if(num-a==0){
        printf("Number is int type.");
    }
    else{
        printf("Number is floting type.");
    }
    return 0;
}
