#include<stdio.h>
void main()
{
    int x,y,s,h,m;
    printf("enter seconds = ");
    scanf("%d",&s);
    
    h= s / 3600;
    y= s % 3600;
    m= y / 60;
    x= y % 60;

    printf("%d : %d : %d",h,m,x);

    // input=10000
    // output=2:46:40
}