#include <stdio.h>

int main()
{
    int n,i,arr[i],e=0,o=0;
    printf("Enter the numbers of integers =");
    scanf("%d",&n);
    printf("Enter digits :");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            e++;
        }
        else{
            o++;
        }
    }
    printf("EVEN =%d \nODD =%d",e,o);

    return 0;
}
