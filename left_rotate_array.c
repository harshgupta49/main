#include <stdio.h>

int main()
{
    int n,i,j,a[100],t,temp;
    printf("Enter number of elements of array =");
    scanf("%d",&n);
    printf("Enter elements =");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter number of turn of left rotate=");
    scanf("%d",&t);
    for(i=0;i<t;i++){
        temp=a[0];
        for(j=0;j<n-1;j++){
            a[j]=a[j+1];
        }
        a[n-1]=temp;
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    return 0;
}
