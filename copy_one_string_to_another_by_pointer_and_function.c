#include <stdio.h>

void copy(char*,char*);

int main()
{
    char str1[100],str2[100];
    printf("Enter string : ");
    scanf("%[^\n]",str1);
    copy(str1,str2);
    puts(str2);

    return 0;
}

void copy(char *p,char *q){
    while(*p!='\0'){
        *q=*p;
        q++;
        p++;
    }
}
