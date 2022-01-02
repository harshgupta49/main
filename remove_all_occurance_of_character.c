#include <stdio.h>
#include<string.h>
int main()
{
    char str[100],n;
    int i,j;
    printf("Enter string :");
    scanf("%[^\n]%*c",str);
    printf("Enter the character :");
    scanf("%c",&n);
    for(i=0;str[i];i++){
        if(str[i]==n){
            for(j=i;str[j];j++){
                str[j]=str[j+1];
                i=0;
            }
        }
    }
    puts(str);

    return 0;
}
