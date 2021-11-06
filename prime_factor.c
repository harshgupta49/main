#include <stdio.h>

int main()
{
    int num,i,j,a;
    printf("enter the number = ");
    scanf("%d",&num);
    for(i=2;i<=num;i++){
        for(j=2;j<=num;j++){
            a=num%j;
            if(a==0){
                printf("%d ",j);
                num=num/j;
            }
        }
    }

    return 0;
}
