#include <stdio.h>

int main()
{
    int a,b,c=41;
    printf("Total match sticks = %d\n",c);
    while(c!=1){
        printf("Choose sticks in between 1 to 7 :");
        scanf("%d",&a);
        if(a>=1&&a<=7){
            b=8-a;
            printf("Computer choose :%d\n",b);
            c=c-a-b;
            printf("Remaining sticks :%d\n",c);
        }
    }
    printf("\n\nYou pick last stick\nYou Lose");
    
    return 0;
}
