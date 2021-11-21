#include <stdio.h>
int main()
{
   int i,j,k,s;
   printf("enter number of stars : ");
   scanf("%d",&s);
   for(i=1;i<=s;i++)
   {
       for(k=s-i;k>=1;k--){
           printf(" ");
       }
       for(j=1;j<=s;j++){
    	    printf("*");
	}
	printf("\n");
   }
}
