#include<stdio.h>
#include<string.h>
void main()
{
    int a;
    char name[10];

    printf("enter your name = ");
    gets(name);

    a= strlen(name);
    printf("your name in %d character",a);
}