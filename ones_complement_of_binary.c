#include <stdio.h>
#include<math.h>

int main()
{
    int bin,sum=0,i=0,j=16,a;
    printf("Enter the binary of the number =");
    scanf("%d",&bin);
    while(bin>0){
        if(bin%10==1){
            sum=sum+pow(2,i);
        }
        bin=bin/10;
        i++;
    }
     while(sum>0){
        a=pow(2,j);
        if(sum/a>=1){
            printf("0");
            sum=sum-a;
        }
        else{
        printf("1");
        }
        j--;
    }

    return 0;
}
