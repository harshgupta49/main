#include <stdio.h>

int main()
{
    int a1,a2,a3;
    printf("Enter the first digit :");
    scanf("%d",&a1);
    printf("Enter the second digit :");
    scanf("%d",&a2);
    printf("Enter the third digit :");
    scanf("%d",&a3);
    if(a2-a1==a3-a2){
        printf("Series is an A.P");
    }
    else if(a2/a1==a3/a2){
        printf("Series is a G.P");
    }
    else
    printf("Series is neither A.P nor G.P");

    return 0;
}
