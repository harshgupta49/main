#include <stdio.h>

int main()
{
    int i,j,*p,a[10][10],r,c;
    p=a[0];
    printf("Enter size of row and column of matrix :");
    scanf("%d %d",&r,&c);
    printf("Enter the element of matrix :\n");
    for(i=0;i<r*c;i++){
        scanf("%d",(p+i));
    }
    printf("Matix is :\n");
    for(i=0;i<r*c;i++){
        printf("%d ",*(p+i));
        if(i%c==c-1){
            printf("\n");
        }
    }

    return 0;
}
