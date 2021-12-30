#include <stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i;
    printf("Enter string :");
    scanf("%[^\n]",str);
    for(i=0;str[i];i++){
        if(str[i]>=97&&str[i]<=122){
            str[i]=str[i]-32;
        }
    }
    printf("Lower case to upper case :");
    puts(str);

    return 0;
}
