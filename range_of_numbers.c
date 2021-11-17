#include <stdio.h>

int main()
{
    int num,i,a,x=0,y=0,z=0,l,s;
    printf("Enter the no of numbers =");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        scanf("%d",&a);
        if(i==1){
            s=a+1;
        }
        if(s>a){
            s=a;
        }
        
        if(l<a){
            l=a;
        }
    }
    printf("Range-%d",l-s);

    return 0;
}
