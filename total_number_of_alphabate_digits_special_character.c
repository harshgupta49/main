#include <stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,x=0,y=0,z=0;
    printf("Enter string :");
    scanf("%[^\n]",str);
    for(i=0;str[i];i++){
        if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z'){
            x++;
        }
        else if(str[i]>='0'&&str[i]<='9'){
            y++;
        }
        else{
            z++;
        }
    }
    printf("Total number of alphabate =%d\nTotal number of digits =%d\nTotal number of speacial character =%d",x,y,z);

    return 0;
}
