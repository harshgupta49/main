#include <stdio.h>
int main()
{
   int i,j,s,k;
   printf("Enter number of stars : ");
   scanf("%d",&s);
   for(i=0;i<=s;i++)
   {
	for(j=2*s-i+2;j>=1;j--){
	   printf("  ");}  
	for(k=1;k<=2*i-1;k++)
	   printf("* ");
	printf("\n");
   }
for(i=2*s;i>s;i--)
    {
	for(j=2*s-i+1;j>=1;j--){
	   printf("  ");}
	for(k=1;k<=2*i+1;k++)
       printf("* ");
	printf("\n");
}
for(i=s+1;i<=2*s;i++)
    {
	for(j=2*s-i+1;j>=1;j--){
	   printf("  ");}
	for(k=1;k<=2*i+1;k++)
       printf("* ");
	printf("\n");
}
	for(i=s;i>=0;i--)
   {
	for(j=2*s-i+2;j>=1;j--){
	   printf("  ");}  
	for(k=1;k<=2*i-1;k++)
	   printf("* ");
	printf("\n");
   }
   
   return 0;
}
