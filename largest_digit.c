#include <stdio.h>
#include<math.h>
int main()
{
    int num,ans;
    printf("ENTER THE NUMBER OF DIGITS = ");
    scanf("%d",&num);
    ans=pow(10,num)-1;
    printf("ANSWER = %d",ans);

    return 0;
}
