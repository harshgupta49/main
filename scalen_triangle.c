#include <stdio.h>
int main()
{
   int i,j,s,k;
   printf("enter number of stars : ");
   scanf("%d",&s);
   for(i=0;i<=s;i++)
   {
	for(j=s-i;j>=1;j--){
	   printf("  ");}  
	for(k=1;k<=2*i-1;k++)
	   printf("* ");
	printf("\n");
   }
}
