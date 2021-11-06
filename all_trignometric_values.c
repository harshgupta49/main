#include <stdio.h>
#include<math.h>
int main()
{
    float x,rad;
    printf("enter the angle = ");
    scanf("%f",&x);
    rad=x*3.14/180;
    printf("sinx=%f\n",sin(rad));
    printf("cosx=%f\n",cos(rad));
    printf("tanx=%f\n",tan(rad));
    printf("cotx=%f\n",cos(rad/sin(rad)));
    printf("secx=%f\n",1/cos(rad));
    printf("cosecx=%f\n",1/sin(rad));

    return 0;
}
