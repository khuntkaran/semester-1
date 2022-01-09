#include<stdio.h>
void swap(int *a,int *b);
void main()
{
    int a=15,b=10;
    int *pa,*pb;
    
    pa=&a;
    pb=&b;
    printf("before swaping a = %d,b = %d\n",*pa,*pb);
    swap(pa,pb);
}
void swap(int *x,int *y)
{
    int *z;
    z=x;
    x=y;
    y=z;

    printf("after swaping a = %d,b = %d",*x,*y);
}