#include <stdio.h>

int main()
{
    int i,a,j,k,n;
    printf("Enter number of stars =");
    scanf("%d",&n);
   for(i=1;i<=n;i++)
    {
        for(j=n-i+1;j>=1;j--)
        {
            printf("*");
        }
        for(a=1;a<=2*i-1;a++){
            printf(" ");
        }
        for(k=n-i+1;k>=1;k--)
        { 
            printf("*");
        }
    
        printf("\n");
    }
    for(i=n;i>=1;i--)
    {
        for(j=n-i+1;j>=1;j--)
        {
            printf("*");
        }
        for(a=1;a<=2*i-1;a++){
            printf(" ");
        }
        for(k=n-i+1;k>=1;k--)
        { 
            printf("*");
        }
    
        printf("\n");
    }
}
