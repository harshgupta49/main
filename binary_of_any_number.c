#include <stdio.h>
#include<math.h>
int main()
{
    int num,i=16,a;
    printf("Enter the number whose binary you want :");
    scanf("%d",&num);
    while(num>0){
        a=pow(2,i);
        if(num/a>=1){
            printf("1");
            num=num-pow(2,i);
        }
        else{
        printf("0");
        }
        i--;
    }

    return 0;
}
