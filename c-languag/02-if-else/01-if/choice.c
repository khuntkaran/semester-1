#include<stdio.h>
void main()
{
    float no1,no2,x;

    printf("enter no1 = ");
    scanf("%f",&no1);

    printf("enter no2 = ");
    scanf("%f",&no2);

    printf(" 1 = addition\n 2 = subtraction\n 3 = multiplication\n 4 = division\n");
    printf("enter your choice = ");
    scanf("%f",&x);

    if (x==1)
    {
        printf("no1+no2 = %f",no1+no2);
    }
    if (x==2)
    {
        printf("no1-no2 = %f",no1-no2);
    }
     if (x==3)
    {
        printf("no1*no2 = %f",no1*no2);
    }
     if (x==4)
    {
        printf("no1/no2 = %f",no1/no2);
    }
     
}