#include<stdio.h>
int main()
{
	int i,a[i],b[i],j,c[j],n;
	printf("Enter the number of integers in these array =");
	scanf("%d",&n);
	printf("Enter the integers of first array =");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the integers of second array =");
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	printf("Sum of arrays =");
	for(i=0;i<n;i++){
		c[j]=a[i]+b[i];
		printf("%d ",c[j]);
	}

	return 0;
}
