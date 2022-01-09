#include<stdio.h>
void main()
{
    int a=15,b=10;
    int *pa,*pb,*pc;

    pa=&a;
    pb=&b;
    printf("before swaping a = %d,b = %d\n",*pa,*pb);

    pc=pa;
    pa=pb;
    pb=pc;
    printf("after swaping a = %d,b = %d",*pa,*pb);
}