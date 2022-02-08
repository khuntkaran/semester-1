#include<stdio.h>
void main()
{
    int a=15;
    int *pa;

    pa=&a;
    printf("address = %u",pa );
    printf("value = %d",*pa);
}