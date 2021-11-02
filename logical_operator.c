#include <stdio.h>

int main()
{
   int a=5,b=6,c;
   c=(a==5)&&(b==6);
   printf("the value is %d\n",c);
    c=(a==6)&&(b==5);
   printf("the value is %d\n",c);
    c=(a==6)&&(b==6);
   printf("the value is %d\n",c);
    c=(a==5)&&(b==5);
   printf("the value is %d\n",c);
   
    c=(a==5)||(b==6);
   printf("the value is %d\n",c);
    c=(a==6)||(b==5);
   printf("the value is %d\n",c);
    c=(a==6)||(b==6);
   printf("the value is %d\n",c);
    c=(a==5)||(b==5);
   printf("the value is %d\n",c);
   
   
    return 0;
}
