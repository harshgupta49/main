#include<stdio.h>  
  
int main()  
{  
    int i=1, n, sum = 0;  
  
    printf("Enter a number =");  
    scanf("%d",&n);
    while(i<=n)  
    {  
        sum=sum+i;  
        i+=2;  
    }  
    printf("Sum of odd numbers from 1 to %d is %d\n", n, sum);  
    return 0;  
}
