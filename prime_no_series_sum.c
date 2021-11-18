#include <stdio.h>

int main()
{
    int num,i,j,c,sum=0;
    printf("Enter the number :");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        for(j=1;j<=i;j++){
            if(i%j==0){
                c++;
            }
        }
        if(c==2){
                printf("%d ",i);
                sum=sum+i;
            }
        c=0;
    }
    printf("\nSUM =%d",sum);

    return 0;
}
