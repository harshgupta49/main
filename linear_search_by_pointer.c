#include <stdio.h>

int main()
{
    int a[100],*p,n,i,in,ele;
    printf("Enter the length of array :");
    scanf("%d",&n);
    printf("Enter elements :");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter element for search :");
    scanf("%d",&ele);
    p=a;
    for(i=0;i<n/2;i++){
        if(*(p+i)==ele){
            in=i;
            break;
        }
    }
    printf("Index of %d element is %d",ele,in);

    return 0;
}
