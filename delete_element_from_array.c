#include <stdio.h>

int main()
{
    int n,i,a[100],pos;
    printf("Enter the number of elements =");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter position of element for delete =");
    scanf("%d",&pos);
    for(i=pos;i<n-1;i++){
        a[i]=a[i+1];
    }
    for(i=0;i<n-1;i++){
        printf("%d ",a[i]);
    }

    return 0;
}
