#include <stdio.h>
#include<math.h>

int main()
{
    int bin,sum=0,i=0;
    printf("Enter the binary of the number =");
    scanf("%d",&bin);
    while(bin>0){
        if(bin%10==1){
            sum=sum+pow(2,i);
        }
        bin=bin/10;
        i++;
    }
    printf("%d",sum);

    return 0;
}
