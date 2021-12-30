#include <stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    int x;
    printf("Enter first string :");
    gets(str1);
    printf("Enter second string :");
    gets(str2);
    x=strcmp(str1,str2);
    if(x==0){
        printf("Same strings");
    }
    else{
        printf("Different string");
    }

    return 0;
}
