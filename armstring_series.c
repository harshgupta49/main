#include <stdio.h>

int main()
{
    int num,i,r,sum=0,t;
    printf("Enter the number = ");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        t=i;
        while(t>0){
            r=t%10;
            sum=sum+r*r*r;
            t=t/10;
        }
        if(sum==i){
            printf("%d ",i);
        }
        sum=0;
    }
    
    
    return 0;
}
