#include<stdio.h>
void main()
{
    float km,m,f,i,cm;

    printf("enter km =");
    scanf("%f",&km);

    m=1000*km;
    printf("meter = %f\n",m);

    f=3280.84*km;
    printf("feet = %f\n",f);

    i=39370.1*km;
    printf("inches = %f\n",i);

    cm=100000*km;
    printf("centimeters = %f\n",cm);
}