#include <stdio.h>

int main()
{
    int i,ar[100],*ptr,n;
    printf("Enter the lenght of array :");
    scanf("%d",&n);
    printf("Enter elements of array :");
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    ptr=ar;
    for(i=0;i<n;i++){
        printf("%d ",*(ptr+i));
    }

    return 0;
}
