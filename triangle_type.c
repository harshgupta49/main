#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the sides of the triangle = ");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c){
        printf("equilateral triangle");
    }
    else if(a==b || b==c){
        printf("scalen triangle");
    }
    else{
        printf("isoscalen triangle");
    }

    return 0;
}
