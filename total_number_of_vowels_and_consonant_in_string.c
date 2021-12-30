#include <stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,x=0,y=0;
    printf("Enter string :");
    scanf("%[^\n]",str);
    for(i=0;str[i];i++){
        if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U'){
            x++;
        }
        else{
            y++;
        }
    }
    printf("Vowels =%d\nConsonants =%d",x,y);

    return 0;
}
