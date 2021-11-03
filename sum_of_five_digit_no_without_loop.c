#include <stdio.h>

int main()
{
    int x,n1,n2,n3,n4,n5,a,b,c;
  printf("enter a five digit number = ");
  scanf("%d",&x);
  n1=x%10;
  a=x/10;
  n2=a%10;
  b=a/10;
  n3=b%10;
  c=b/10;
  n4=c%10;
  n5=c/10;
  printf("sum=%d",n1+n2+n3+n4+n5);

    return 0;
}
