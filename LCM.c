#include <stdio.h>

int main()
{
    int n1,n2,m;
    printf("Enetr the numbers = ");
    scanf("%d %d",&n1,&n2);
    m=(n1>n2)?n1:n2;
    while(1){
        if(m%n1==0&&m%n2==0){
            printf("LCM is = %d",m);
            break;
        }
        m++;
    }
    
    return 0;
}    
