#include<stdio.h>
int main()
{
	int i,arr[i],sum=0,n;
	printf("Enter the number of students =");
	scanf("%d",&n);
	printf("Enter numbers of students ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	printf("Average Marks= %d",sum/n);

	return 0;
}
