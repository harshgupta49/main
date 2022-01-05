#include <stdio.h>

int main()
{
    char str[100],ch,ele;
    int i,x;
    printf("Enter string :");
    scanf("%[^\n]%*c",str);
    printf("Enter character which you want to delete :");
    scanf("%c%*c",&ch);
    printf("Enter new character which you want to add :");
    scanf("%c",&ele);
    for(i=0;str[i];i++){
        if(str[i]==ch){
            x=i;
        }
    }
    str[x]=ele;
    puts(str);

    return 0;
}
