#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[5][5],i,j,x=2,y=2;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            scanf("%d",&a[i][j]);
        }
    }
    if(a[2][2]!=0){
        printf("0");
        return 0;
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(a[i][j]!=0){
                x=i;
                y=j;
                break;
            }
        }
    }
    printf("%d",abs(x-2)+abs(y-2));
    
    return 0;
}
