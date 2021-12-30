#include <stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    int i,j,x;
    printf("Enter string :");
    scanf("%[^\n]",str1);
    for(i=0;str1[i];i++){
       
    }
    for(j=0;j<i;j++){
        str2[i-1-j]=str1[j];
    }
    x=strcmp(str1,str2);
    if(x==0){
        printf("String is Palindrome");
    }
    else{
        printf("String is not Palindrome");
    }

    return 0;
}
