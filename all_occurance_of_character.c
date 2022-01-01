#include <stdio.h>
#include<string.h>
int main()
{
    char str[100],n;
    int i,x=0;
    printf("Enter string :");
    scanf("%[^\n]%*c",str);
    printf("Enter the character :");
    scanf("%c",&n);
    printf("Occurances of that character is :");
    for(i=0;str[i];i++){
        if(str[i]==n){
           x=1;
           printf("%d ",i);
        }
    }
    if(x==0){
        printf(" No Occurances");
    }

    return 0;
}
