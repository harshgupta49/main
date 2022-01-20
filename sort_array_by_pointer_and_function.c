#include <stdio.h>
void sort(int *p,int n)
{
    int t,i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(*(p+j)>*(p+j+1)){
                t=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=t;
            }
        }
    }
}
int main()
{
    int p[1000];
    int n,i;
    printf("Enter the size of array :");
    scanf("%d",&n);
    printf("Enter array elements :");
    for(i=0;i<n;i++)
    scanf("%d",&p[i]);
    sort(p,n);
    printf("Array after sorting : ");
    for(i=0;i<n;i++)
    printf("%d ",p[i]);
    
    
}
