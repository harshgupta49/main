#include <stdio.h>

int main()
{
    int i,ar[100],b[100],*ptr,n;
    printf("Enter the lenght of array :");
    scanf("%d",&n);
    printf("Enter elements of array :");
    ptr=ar;
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
        b[i]=*(ptr+i);
    }
    
    for(i=0;i<n;i++){
        printf("%d ",b[i]);
    }

    return 0;
}
