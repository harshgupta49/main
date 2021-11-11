#include <stdio.h>
int main ()
{
    char a;
    printf("Enter the alphabate =");
    scanf("%c",&a);
    if(65<=a&&a<=90)
    printf("UPPERCASE");
    else
    printf("Not Uppercase");
  return 0;
}
