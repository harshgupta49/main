#include <stdio.h>

int main()
{
    int i,a[i],n,max;
    printf("Enter number of integers =");
    scanf("%d",&n);
    printf("Enter integers =");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    printf("MAX VALUE =%d",max);

    return 0;
}
