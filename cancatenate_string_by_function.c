#include <stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    int i,x=0;
    printf("Enter first string :");
    scanf("%[^\n]%*c",str1);
    printf("Enter second string :");
    scanf("%[^\n]",str2);
    strcat(str1,str2);
    printf("concatenate string :");
    puts(str1);

    return 0;
}
