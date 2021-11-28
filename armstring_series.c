#include <stdio.h>
#include<math.h>
int main()
{
    int num,i,r,sum=0,t,x=0;
    printf("Enter the number = ");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        t=i;
        while(t>0){
        x++;
        t=t/10;
        }
        t=i;
        while(t>0){
            r=t%10;
            sum=sum+pow(r,x);
            t=t/10;
        }
        x=0;
        if(sum==i){
            printf("%d ",i);
        }
        sum=0;
    }
    
    
    return 0;
}
