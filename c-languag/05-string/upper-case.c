#include<stdio.h>
#include<string.h>
void main()
{
    int a,i;
    char name[10];

    printf("enter your name = ");
    gets(name);
    
    a= strlen(name);

    for(i=0;i<a;i++)
    {
       printf("%c",toupper(name[i])); 
    }
}