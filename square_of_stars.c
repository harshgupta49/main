#include<stdio.h>
int main()
{
    int i,j,b;
    printf("Enter length of side of square = ");
    scanf("%d",&b);
    for(i=1;i<=b;i++)
    {
    	for(j=1;j<=b;j++)
    	printf("* ");
    	printf("\n");
	}
    return 0;
}
