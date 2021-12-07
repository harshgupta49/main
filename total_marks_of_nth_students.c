#include <stdio.h>

int main()
{
    int i,n,arr[i],sum=0;
    printf("Enter no of students=");
    scanf("%d",&n);
    printf("enter the marks of student =");
    for(i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("Total marks of the students =%d",sum);

    return 0;
}
