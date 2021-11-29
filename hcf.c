#include <stdio.h>

int main()
{
    int n1,n2,i,j,s,r,z;
    printf("Enter the numbers =");
    scanf("%d %d",&n1,&n2);
    for(i=1;i<=n1;i++){
        if(n1%i==0){
            s=i;
        }
        for(j=1;j<=n2;j++){
            if(n2%j==0){
                r=j;
            }
            if(r==s){
                z=r;
            }
        }
    }
    printf("HCF =%d",z);
    
    return 0;
}
