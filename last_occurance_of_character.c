#include <stdio.h>
#include<string.h>
int main()
{
    char str[100],n;
    int i,x=0,y;
    printf("Enter string :");
    scanf("%[^\n]%*c",str);
    printf("Enter the character :");
    scanf("%c",&n);
    for(i=0;str[i];i++){
        if(str[i]==n){
            x=1;
            y=i;
        }
    }
    if(x==1){
        printf("Last occurance of %c is at index %d",n,y);
    }
    else{
        printf("Character does not exists in this string ");
    }

    return 0;
}
