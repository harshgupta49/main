#include <stdio.h>

int main()
{
    char str[100],b[26]={'\0'};
    int i,max,min,x;
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
    for(i=0;i<26;i++){
        if(b[i]>max){
            max=b[i];
        }
    }
    min=max;
    x=0;
    for(i=0;i<26;i++){
        if(b[i]<min&&b[i]!=0){
            min=b[i];
            x=i;
        }
    }
    printf("%c",x+97);

    return 0;
}
