#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number for absolute value = ");
    scanf("%d",&num);
    if(num>=0){
        printf("Absolute value =%d",num);
    }
    else{
        printf("Absolute value =%d",num/-1);
    }

    return 0;
}
