#include <stdio.h>

int main()
{
    int a[1000][1000],N,i,j,l=0,m=0,n=0,o=0,ele;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            scanf("%d",&a[i][j]);
            if(j>=0&&j<=(N-1)/2&&a[i][j]==0){
                l++;
            }
            if(j>(N-1)/2&&a[i][j]==0){
                m++;
            }
            if(i>=0&&i<=(N-1)/2&&a[i][j]==0){
                n++;
            }
            if(i>(N-1)/2&&a[i][j]==0){
                o++;
            }
        }
    }
    ele=N/2*N;
    if(l==ele){
        printf("Folded\n");
        printf("Left\n");
    }
    else if(m==ele){
        printf("Folded\n");
        printf("Right\n");
    }
    else if(n==ele){
        printf("Folded\n");
        printf("Top\n");
    }
    else if(o==ele){
        printf("Folded\n");
        printf("Bottom\n");
    }
    else{
        printf("Not Folded");
    }

    return 0;
}
