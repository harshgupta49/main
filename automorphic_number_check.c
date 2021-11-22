#include<stdio.h>
#include<math.h>
int main()
{
    int num, sqr, t, last,d;
    int n =0;
    printf("Enter a number =");
    scanf("%d",&num);
 
    sqr = num*num;  
    t = num;
    while(t>0){
        n++;
        t = t/10;
    }
    d =(pow(10,n));
    last = sqr % d;
 
    if(last == num)
        printf("Automorphic number \n");
    else
        printf("Not Automorphic \n");
}
