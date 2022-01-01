#include <stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100]={'\0'},str3[100];
    int i,j,n,x=0,o=0;
    printf("Enter string :");
    scanf("%[^\n]",str1);
    n=strlen(str1);
    for(i=n-1;i>=0;i--){
        if(str1[i]!=32){
            str3[x++]=str1[i];
        }
        else{
            str3[x]='\0';
            x=0;
            for(j=strlen(str3)-1;j>=0;j--){
                str2[o++]=str3[j];
                str3[j]='\0';
            }
            str2[o++]=' ';
        }
    }
    for(j=strlen(str3)-1;j>=0;j--){
        str2[o++]=str3[j];
    }
    puts(str2);

    return 0;
}
