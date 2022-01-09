#include<stdio.h>
#include<string.h>
void upper(char xyz[10]);
void main()
{
   
    char name[10];

    printf("enter your name = ");
    gets(name);
    
    upper(name);
}
void upper(char string[10])
{
     int a,i;
    a= strlen(string);

    printf("%s\n",strupr(string));

    for(i=0;i<a;i++)
    {
       printf("%c",toupper(string[i])); 
    }
}