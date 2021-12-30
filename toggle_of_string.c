#include <stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i;
    printf("Enter string :");
    scanf("%[^\n]",str);
    for(i=0;str[i];i++){
        if(str[i]>=65&&str[i]<=90){
            str[i]=str[i]+32;
        }
        else if(str[i]>=90&&str[i]<=122){
            str[i]=str[i]-32;
        }
    }
    printf("string after toggle :");
    puts(str);

    return 0;
}
