#include <stdio.h>
int main ()
{
    char a;
    printf("Enter the alphabate =");
    scanf("%c",&a);
    if((97<=a&&a<=112)||(65<=a&&a<=90))
    printf("ALPHABATE");
    else
    printf("NO IT IS NOT ALPHABATE");
  return 0;
}
