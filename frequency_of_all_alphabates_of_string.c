#include <stdio.h>

int main()
{
    char str[100],b[26]={'\0'};
    int i;
    printf("Enter string :");
    scanf("%[^\n]",str);
    for(i=0;str[i];i++){
        if(str[i]>='A'&&str[i]<='Z'){
            str[i]=str[i]+32;
        }
    }
    for(i=0;str[i];i++){
        b[str[i]-97]++;
    }
    for(i=0;i<26;i++){
        if(b[i]>=1){
            printf("Frequency of %c = %d\n",i+97,b[i]);
        }
    }

    return 0;
}
