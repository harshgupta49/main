#include <stdio.h>

int main()
{
    int i,n,a[i];
    printf("Enter number of elements want to store in array =");
    scanf("%d",&n);
    printf("Enter elements :");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==1){
            a[i]++;
        }
    }
    printf("Resultant array =");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    return 0;
}
