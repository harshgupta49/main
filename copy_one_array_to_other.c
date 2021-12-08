#include<stdio.h>
int main()
{
    int i,a[i],j,b[j],n;
    printf("Enter number of integers =");
    scanf("%d",&n);
    printf("Enter numbers :");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    printf("Resultant array element =");
    for(j=0;j<n;j++){
        printf("%d ",b[j]);
    }
    
}
