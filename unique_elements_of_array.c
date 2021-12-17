#include <stdio.h>

int main()
{
    int n,i,a[100],b[100]={0},max;
    printf("Enter number of element of array =");
    scanf("%d",&n);
    printf("Enter elements of array =");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    max++;
    for(i=0;i<n;i++){
        b[a[i]]++;
    }
    for(i=0;i<max;i++){
        if(b[i]==1){
            printf("%d ",i);
        }
    }

    return 0;
}
