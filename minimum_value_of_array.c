#include <stdio.h>

int main()
{
    int i,a[i],n,min;
    printf("Enter number of integers =");
    scanf("%d",&n);
    printf("Enter integers =");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("MINIMUM VALUE =%d",min);

    return 0;
}
