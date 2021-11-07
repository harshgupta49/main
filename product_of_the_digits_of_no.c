#include <stdio.h>
int main()
{
   int num,x,ans=1,i;
   printf("ENTER THE NUMBER =");
   scanf("%d",&num);
   for(i=1;i<=10;i++){
       x=num%10;
       num=num/10;
       if(x!=0)
       ans=x*ans;
   }
   printf("Answer = %d",ans);
   
    return 0;
}
