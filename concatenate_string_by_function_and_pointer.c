#include <stdio.h>

void cat(char*,char*);

int main()
{
    char str1[100],str2[100];
    printf("Enter 1st string : ");
    scanf("%[^\n]%*c",str1);
    printf("Enter 2nd string : ");
    scanf("%[^\n]",str2);
    cat(str1,str2);
    puts(str1);

    return 0;
}

void cat(char *p,char *q){
    int x;
    while(*(++p)!='\0'){
    }
    while(*q!='\0'){
        *(p++)=*(q++);
    }
}
