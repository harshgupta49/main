#include<stdio.h>
int main()
{
	int i,a[i],b[i],j,c[j],n;
	printf("Enter the number of variable =");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++){
		c[j]=a[i]+b[i];
		printf("%d ",c[j]);
	}

	return 0;
}
