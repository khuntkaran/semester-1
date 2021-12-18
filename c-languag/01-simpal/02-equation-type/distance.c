#include<stdio.h>
void main()
{
    float d,u,t,a;

    printf("enter u = ");
    scanf("%f",&u);

    printf("enter a = ");
    scanf("%f",&a);
    
    printf("enter t = ");
    scanf("%f",&t);
    
    d=(u*t)+(a*(t*t));

    printf("(your distance = %f",d);
}