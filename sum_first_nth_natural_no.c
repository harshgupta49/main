#include <stdio.h>
int main()
{
    int i, n, sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        sum=i+sum;
    }
    printf("Sum of first %d natural numbers = %d", n, sum);

    return 0;
}
