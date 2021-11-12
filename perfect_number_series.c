#include <stdio.h>

int main()
{
    int num,i,sum=0,j;
    printf("Enter the number =");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
           for(j=1;j<=i-1;j++){
            if(i%j==0){
                sum=sum+j;
            }
        }
        if(sum==i){
        printf("%d ",sum);
        }
        sum=0;
    }

    return 0;
}
