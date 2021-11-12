#include <stdio.h>

int main()
{
    int num,i,sum=0;
    printf("Enter the number =");
    scanf("%d",&num);
    printf("factors =");
    for(i=1;i<=num-1;i++){
        if(num%i==0){
            printf("%d ",i);
            sum=sum+i;
        }
    }
    printf("\nSUM = %d",sum);
    if(sum==num){
        printf("\nNumber is a Perfect Number");
    }
    else{
        printf("\nNumber is Not a Perfect Number");
    }

    return 0;
}
