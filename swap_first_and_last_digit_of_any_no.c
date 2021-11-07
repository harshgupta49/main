#include <stdio.h>
int main()
{
   int num,n1,i,a=1,z,n2,x;
   printf("ENTER THE NUMBER =");
   scanf("%d",&num);
   n1=num%10;
   for(i=1;i<=10;i++){
       a=10*a;
       z=num/a;
       if(z>=1 && z<=9){
           x=num-z*a+n1*a-n1+z;
           printf("%d",x);
       }
   }
  
    return 0;
}
