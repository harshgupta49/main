#include <stdio.h>
#include <math.h>

int main() {
    long i,c,k,n;
    scanf("%ld",&c);
    scanf("%ld",&k);
    scanf("%ld",&n);
    for(i=1;i<=n;i++){
        c=c*k;
    }
    printf("%ld",c);
  
    return 0;
}
