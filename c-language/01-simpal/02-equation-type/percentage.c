#include<stdio.h>
void main()
{
    float x,a,b,c,d,e;
    printf("enter subject-1 mark = ");
    scanf("%f",&a);
    printf("enter subject-2 mark = ");
    scanf("%f",&b);
    printf("enter subject-3 mark = ");
    scanf("%f",&c);
    printf("enter subject-4 mark = ");
    scanf("%f",&d);
    printf("enter subject-5 mark = ");
    scanf("%f",&e);

    x=(a+b+c+d+e)/(5);
   
    printf("percentage = %f",x);
    
}