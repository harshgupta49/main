#include <stdio.h>
#include<string.h>
int main()
{
    char str[100],word[100];
    int i,j,x,y,f=0;
    printf("Enter the string : ");
    scanf("%[^\n]%*c",str);
    printf("Enter the word :");
    scanf("%[^\n]%*c",word);
    x=strlen(str);
    y=strlen(word);
    for(i=0;i<=x-y;i++){
        for(j=i;j<i+y;j++){
            if(str[j]==word[j-i]){
                f=1;
            }
            else{
                f=0;
                break;
            }
        }
        if(f==1){
            for(j=i;str[j];j++){
                str[j]=str[j+y];
            }
        }
    }
    printf("String after deletion of all occurances :");
    puts(str);

    return 0;
}
