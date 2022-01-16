#include <stdio.h>

int main()
{
    int a[100],*p,n,i,temp;
    printf("Enter the length of array :");
    scanf("%d",&n);
    printf("Enter elements :");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    p=a;
    for(i=0;i<n/2;i++){
        temp=*(p+i);
        *(p+i)=*(p+n-1-i);
        *(p+n-1-i)=temp;
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    return 0;
}
