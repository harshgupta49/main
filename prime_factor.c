#include <stdio.h>

int main()
{
    int num,j,r;
    printf("enter the number = ");
    scanf("%d",&num);
    while(num>1){
        for(j=2;j<=num;j++){
            r=num%j;
            if(r==0){
                printf("%d ",j);
                num=num/j;
                break;
            }
        }
    }

    return 0;
}
