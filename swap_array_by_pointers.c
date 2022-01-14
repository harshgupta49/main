#include <stdio.h>

int main()
{
    int i,a[100],b[100],*ptr,*ptr2,n,temp;
    printf("Enter the lenght of arrays :");
    scanf("%d",&n);
    ptr=a;
    ptr2=b;
    printf("Enter elements of first array :");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter elements of second array :");
    for(i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++){
        temp=*(ptr+i);
        *(ptr+i)=*(ptr2+i);
        *(ptr2+i)=temp;
    }
    printf("First arry :");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\nSecond arry :");
    for(i=0;i<n;i++){
        printf("%d ",b[i]);
    }

    return 0;
}
