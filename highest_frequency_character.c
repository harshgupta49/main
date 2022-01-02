#include <stdio.h>

int main()
{
    char str[100],b[26]={'\0'};
    int i,max,x;
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
    max=b[0];
    x=0;
    for(i=0;i<26;i++){
        if(b[i]>max){
            max=b[i];
            x=i;
        }
    }
    printf("%c",x+97);

    return 0;
}
