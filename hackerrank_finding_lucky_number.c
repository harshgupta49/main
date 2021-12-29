#include <stdio.h>

int main()
{
    int a[1000],i,n,x=0,y=0,z=0;
    scanf("%d",&n);
    while(n>0){
        a[x++]=n%10;
        n=n/10;
    }
    for(i=0;i<x;i++){
        if(a[i]==3){
            y++;
        }
        else if(a[i]==9){
            z++;
        }
    }
    if(y>=1&&z>=1){
        printf("Yes");
    }
    else{
        printf("No");
    }
    
   

    return 0;
}
