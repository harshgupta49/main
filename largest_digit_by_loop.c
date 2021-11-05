#include <stdio.h>
#include<math.h>
int main()
{
    int num,a=0,i;
    printf("Enter no of digits =");
    scanf("%d",&num);
    for(i=0;i<=num-1;++i){
        a=pow(10,i)+a;
    }
    printf("%d",9*a);
    
    return 0;
}
