#include<stdio.h>
void main()
{
    int a=15,b=10;
    int *pa=&a,*pb=&b;

    printf("value = %d",*pa+*pb);
}