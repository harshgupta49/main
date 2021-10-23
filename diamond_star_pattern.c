#include <stdio.h>
int main()
{
   int i,j,s,k,r;
   printf("enter number of rows : ");
   scanf("%d",&s);
   r=s;
   for(i=0;i<=s;i++)
   {
	for(j=1;j<=s-i;j++){
	   printf("  ");}  
	for(k=1;k<=2*i-1;k++)
	   printf("* ");
	printf("\n");
   }
   
   for(i=s;i>=0;i--)
   {
	for(j=1;j<=s-i;j++){
	   printf("  ");}  
	for(k=1;k<=2*i-1;k++)
	   printf("* ");
	printf("\n");
   }

   return 0;
}
