#include <stdio.h>

int main()
{
    float mass,h,bmi;
    printf("Enter your weight is kg =");
    scanf("%f",&mass);
    printf("Enter your height in meters =");
    scanf("%f",&h);
    bmi=mass/(h*h);
    if(bmi<15){
        printf("Starvation");
    }
    else if(bmi<17){
        printf("Anorexic");
    }
    else if(bmi<19){
        printf("Underweight");
    }
    else if(bmi<25){
        printf("Ideal");
    }
    else if(bmi<26){
        printf("Overweight");
    }
    else if(bmi>=30&&bmi<31){
        printf("Obese");
    }
    else if(bmi>=40){
        printf("Morbidly obese");
    }
    else
    printf("not match in condition");
    
    return 0;
}
