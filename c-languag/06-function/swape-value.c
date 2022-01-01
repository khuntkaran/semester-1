#include<stdio.h>
int swap(int a,int b);
void main()
{
    int no1,no2;
    printf("enter no1 = ");
    scanf("%d",&no1);

    printf("enter no2 = ");
    scanf("%d",&no2);

    swap(no1,no2);
}
int swap(int x,int y)
{
    int z;
    z=x;
    x=y;
    y=z;
    
    printf("enter no1 = %d\n",x);
    printf("enter no2 = %d",y);
}