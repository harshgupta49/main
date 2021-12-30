#include <stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    int i,x=0;
    printf("Enter first string :");
    gets(str1);
    printf("Enter second string :");
    gets(str2);
    for(i=0;str1[i]!='\0'||str2[i]!='\0';i++){
        if(str1[i]!=str2[i]){
            x++;
            break;
        }
    }
    if(x==0){
        printf("Same strings");
    }
    else{
        printf("Different strings");
    }

    return 0;
}
