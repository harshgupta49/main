#include <stdio.h>

int main()
{
    int num,i,j,c;
    printf("Enter the number :");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        for(j=1;j<=i;j++){
            if(i%j==0){
                c++;
            }
        }
        if(c==2){
                printf("%d ",i);
            }
        c=0;
    }

    return 0;
}
