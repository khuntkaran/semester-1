#include<stdio.h>
void main()
{
    int year,week,days,x,y;

    printf("enter your days = ");
    scanf("%d",&days);

    year = days/365;
    x = days%365;
    week = x/7;
    y = x%7;
    days = y;

    printf("your year:week:days %d:%d:%d",year,week,days);
}