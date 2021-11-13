#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a alphabate = ");
    scanf("%c",&ch);
    if('a'<=ch&&ch<='z'){
        printf("%c",ch-32);
    }
    else if('A'<=ch&&ch<='Z'){
        printf("%c",ch+32);
    }
    
    return 0;
}
