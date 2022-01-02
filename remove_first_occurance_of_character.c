#include <stdio.h>
#include<string.h>
int main()
{
    char str[100],n;
    int i,x;
    printf("Enter string :");
    scanf("%[^\n]%*c",str);
    printf("Enter the character :");
    scanf("%c",&n);
    for(i=0;str[i];i++){
        if(str[i]==n){
            x=i;
            break;
        }
    }
    for(i=x;str[i];i++){
        str[i]=str[i+1];
    }
    puts(str);

    return 0;
}
