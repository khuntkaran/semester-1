#include<stdio.h>
#include<string.h>
void main()
{
    int a,i;
    char name[10];

    printf("enter your name = ");
    gets(name);
    
    a= strlen(name);

    for(i=a-1;i>=0;i--)
    {
       printf("%c",name[i]); 
    }
}