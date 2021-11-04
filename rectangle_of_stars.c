#include<stdio.h>
int main()
{
    int i,j,l,b;
    printf("Enter length and breadth of rectangle = ");
    scanf("%d%d",&l,&b);
    for(i=1;i<=b;i++)
    {
    	for(j=1;j<=l;j++)
    	printf("* ");
    	printf("\n");
	}
    return 0;
}
