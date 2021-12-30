#include <stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    int i,j;
    printf("Enter first string :");
    scanf("%[^\n]%*c",str1);
    printf("Enter second string :");
    scanf("%[^\n]",str2);
    for(i=0;str1[i];i++){
        
    }
    for(j=0;str2[j];j++){
        str1[i++]=str2[j];
    }
    str1[i]='\0';
    printf("concatenate string :");
    puts(str1);

    return 0;
}
