#include <stdio.h>

int main()
{
    int x,y;
    printf("Enter the cordinates x and y : ");
    scanf("%d %d",&x,&y);
    if(x>0&&y>0)
    printf("1st Quadrant");
    else if(x<0&&y>0)
    printf("2nd Quadrant");
    else if(x<0&&y<0)
    printf("3rd Quadrant");
    else if(x>0&&y<0)
    printf("4th Quadrant");
    else if(x==0&&y!=0)
    printf("Y-Axis");
    else
    printf("X-Axis");

    return 0;
}
