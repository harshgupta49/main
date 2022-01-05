#include <stdio.h>
#include<string.h>
int main()
{
    char str[100],vov[100],coc[100];
    int i,x=0,y=0;
    scanf("%[^\n]%*c",str);
    for(i=0;str[i];i++){
        if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U'){
            vov[x++]=str[i];
        }
        else{
            coc[y++]=str[i];
        }
    }
    for(i=0;i<x;i++){
        printf("%c",vov[i]);
    }
    printf("\n");
    for(i=0;i<y;i++){
        printf("%c",coc[i]);
    }

    return 0;
}

