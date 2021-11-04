#include <stdio.h>

int main()
{
    int d;
    printf("Enter the no of days = ");
    scanf("%d",&d);
    switch(d%7){
        case 1:
        printf("sunday");
        break;
        case 2:
        printf("monday");
        break;
        case 3:
        printf("tuesday");
        break;
        case 4:
        printf("wednesday");
        break;
        case 5:
        printf("thursday");
        break;
        case 6:
        printf("friday");
        break;
        case 0:
        printf("saturday");
        break;
    }

    return 0;
}
