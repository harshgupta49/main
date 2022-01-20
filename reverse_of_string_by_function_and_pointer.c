#include <stdio.h>

void rev(char*,char*);

int main()
{
    char str1[100],str2[100];
    int r;
    printf("Enter 1st string : ");
    scanf("%[^\n]%*c",str1);
    rev(str1,str2);
    puts(str2);

    return 0;
}

void rev(char *p,char *q){
    int x=0,i;
    while(*(p++)!='\0'){
        x++;
    }
    p=p-2;
    for(i=0;i<x;i++){
        *(q++)=*(p--);
    }
    
}

