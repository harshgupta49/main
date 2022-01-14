#include<stdio.h>
int natural(int,int);
int main(){
    int m,n;
    printf("Enter lower and upper limit :");
    scanf("%d %d",&m,&n);
    printf("SUM =%d",natural(m,n));
return 0;
}
int natural(int m,int n){
    if(m==n){
        return m;
    }
    else{
        return m+natural(m+1,n);
    }
}
