#include<stdio.h>
void main()
{
    int no1,no2,no3;

    printf("enter your no1 = ");
    scanf("%d",&no1);

    printf("enter your no2 = ");
    scanf("%d",&no2);

    no3=no1;no1=no2;no2=no3;
    printf("no1 = %d\n",no1);
    printf("no2 = %d\n",no2); 
}