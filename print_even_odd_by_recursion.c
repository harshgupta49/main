#include<stdio.h>
int even(int,int);
int odd(int,int);
int main(){
    int m,n;
    printf("Enter lower and upper limit :");
    scanf("%d %d",&m,&n);
    printf("Even number between them :");
    even(m,n);
    printf("\nOdd number between them :");
    odd(m,n);
return 0;
}
int even(int m,int n){
    int i;
    if(m==n){
        if(m%2==0)
        printf("%d ",m);
        return 0;
    }
    else{
        if(m%2==0)
        printf("%d ",m);
        m++;
        return even(m,n);
    }
}
int odd(int m,int n){
    int i;
    if(m==n){
        if(m%2==1)
        printf("%d ",m);
        return 0;
    }
    else{
        if(m%2==1)
        printf("%d ",m);
        m++;
        return odd(m,n);
    }
}
