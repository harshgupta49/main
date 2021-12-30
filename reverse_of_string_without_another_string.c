#include <stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,j,temp;
    printf("Enter string :");
    scanf("%[^\n]",str);
    for(i=0;str[i];i++){
       
    }
    for(j=0;j<=i/2;j++){
        temp=str[j];
        str[j]=str[i-1-j];
        str[i-1-j]=temp;
    }
    puts(str);

    return 0;
    }
