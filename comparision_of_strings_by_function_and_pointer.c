#include <stdio.h>

int comp(char*,char*);

int main()
{
    char str1[100],str2[100];
    int r;
    printf("Enter 1st string : ");
    scanf("%[^\n]%*c",str1);
    printf("Enter 2nd string : ");
    scanf("%[^\n]",str2);
    r=comp(str1,str2);
    if(r==1){
        printf("Same string ");
    }
    else{
        printf("different string");
    }

    return 0;
}

int comp(char *p,char *q){
    while(*p||*q){
        if(*(p++)!=*(q++)){
            return 0;
        }
    }
    return 1;
}
