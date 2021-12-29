#include <stdio.h>

int main()
{
    int kg;
    scanf("%d",&kg);
    if(kg>2&&kg%2==0){
        printf("PLAY");
    }
    else{
        printf("NOT PLAY");
    }

    return 0;
}
