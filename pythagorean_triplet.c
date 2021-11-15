#include <stdio.h>
#include<math.h>
int main()
{
    int i=3,j=4,b;
    float c;
    for(i=1;i<=30;i++){
        for(j=1;j<=30;j++){
            c=sqrt(i*i+j*j);
            b=c;
            if((c-b==0)&&(b<=30))
            printf("%d,%d,%d\n",i,j,b);
        }
    }

    return 0;
}
