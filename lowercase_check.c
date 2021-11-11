#include <stdio.h>
int main ()
{
    char a;
    printf("Enter the alphabate =");
    scanf("%c",&a);
    if(97<=a&&a<=112)
    printf("LOWERCASE");
    else
    printf("NOT LOWECASE");
  return 0;
}
