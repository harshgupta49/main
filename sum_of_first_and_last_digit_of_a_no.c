#include <stdio.h>
int main()
{
   int num,n1,i,a=1,z,n2;
   printf("ENTER THE NUMBER =");
   scanf("%d",&num);
   n1=num%10;
   for(i=1;i<=10;i++){
       a=10*a;
       z=num/a;
       if(z>=1 && z<=9)
       printf("%d",z+n1);
   }
  
    return 0;
}
