#include <stdio.h>

int main()
{
    int i,j,arr[i],n;
    printf("Enter no of digits =");
    scanf("%d",&n);
    printf("Enter the digits of the number ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=n-1;i>=0;i--){
        printf("%d",arr[i]);
    }

    return 0;
}
