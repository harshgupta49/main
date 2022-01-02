#include <stdio.h>

int main()
{
    char str[100],b[26]={'\0'};
    int i;
    printf("Enter string :");
    scanf("%[^\n]%*c",str);
    for(i=0;str[i];i++){
        if(str[i]>='A'&&str[i]<='Z'){
            str[i]=str[i]+32;
        }
    }
    for(i=0;str[i];i++){
        b[str[i]-97]++;
    }
    for(i=0;str[i];i++){
        if(b[str[i]-97]==1){
            printf("%c",str[i]);
        }
    }

    return 0;
}
