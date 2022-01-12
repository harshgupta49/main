#include <stdio.h>

void natural(int n){
    static int i=1;
    if(n==i){
        printf("%d ",i);
    }
    else{
        printf("%d ",i);
        i++;
        natural(n);
    }
}

int main()
{
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    natural(num);

    return 0;
}
