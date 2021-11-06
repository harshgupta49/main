#include <stdio.h>

int main()
{
    int a;
    for(a=0;a<=255;a++){
        printf("%d not bitwise operator is = %d\n",a,~a);
    }

    return 0;
}
