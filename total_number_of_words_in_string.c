#include <stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,x=1;
    printf("Enter string :");
    scanf("%[^\n]",str);
    for(i=0;str[i];i++){
        if(str[i]==32){
            x++;
        }
    }
    printf("Total number of words =%d",x);

    return 0;
}
