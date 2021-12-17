#include <stdio.h>

int main()
{
    int n,i,a[100],pos,num;
    printf("Enter the number of elements =");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter position of element for insert =");
    scanf("%d",&pos);
    printf("Enter element =");
    scanf("%d",&num);
    for(i=n;i>pos;i--){
        a[i]=a[i-1];
    }
    a[pos]=num;
    for(i=0;i<=n;i++){
        printf("%d ",a[i]);
    }

    return 0;
}
