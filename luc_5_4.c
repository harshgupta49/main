#include <stdio.h>

int main()
{
    int num,i,a,x=0,y=0,z=0;
    printf("Enter the no of numbers =");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        scanf("%d",&a);
        if(a>0){
            x++;
        }
        else if(a<0){
            y++;
        }
        else{
            z++;
        }
    }
    printf("Number of positive digits =%d\n",x);
    printf("Number of negative digits =%d\n",y);
    printf("Number of zero =%d\n",z);

    return 0;
}
