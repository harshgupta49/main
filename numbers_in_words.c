#include <stdio.h>

int main()
{
    int num,i,j,x,rev=0,r,f;
    printf("Enter the number =");
    scanf("%d",&num);
     while(num!=0){
        r=num%10;
        rev=rev*10+r;
        num=num/10;
    }
    while(rev!=0){
        r=rev%10;
        rev=rev/10;
        switch(r){
            case 0:
            printf("zero ");
            break;
            case 1:
            printf("one ");
            break;
            case 2:
            printf("two ");
            break;
            case 3:
            printf("three ");
            break;
            case 4:
            printf("four ");
            break;
            case 5:
            printf("five ");
            break;
            case 6:
            printf("six ");
            break;
            case 7:
            printf("seven ");
            break;
            case 8:
            printf("eight ");
            break;
            case 9:
            printf("nine ");
            break;
        }
    }

    return 0;
}
